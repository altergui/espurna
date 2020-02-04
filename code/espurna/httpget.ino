/*

HTTPGET MODULE

Copyright (C) 2020 by Gui Iribarren <gui at altermundi dot net>

*/

#if HTTPGET_SUPPORT

#include "ESPAsyncTCP.h"
#include "SyncClient.h"

bool _hget_enabled = false;
SyncClient _hget_client;

void _hgetConfigure() {
    _hget_enabled = getSetting("hgetEnabled", HTTPGET_ENABLED).toInt() == 1;
    if (_hget_enabled && (getSetting("hgetHost", HTTPGET_HOST).length() == 0)) {
        _hget_enabled = false;
        setSetting("hgetEnabled", 0);
    }
}

bool hgetSend(const char * topic, const char * payload) {

    if (!_hget_enabled) return true;
    if (!wifiConnected() || (WiFi.getMode() != WIFI_STA)) return true;

    String h = getSetting("hgetHost", HTTPGET_HOST);
    #if MDNS_CLIENT_SUPPORT
        h = mdnsResolve(h);
    #endif
    char * host = strdup(h.c_str());
    unsigned int port = getSetting("hgetPort", HTTPGET_PORT).toInt();
    DEBUG_MSG_P(PSTR("[HTTPGET] Sending to %s:%u\n"), host, port);

    bool success = false;

    _hget_client.setTimeout(2);
    if (_hget_client.connect((const char *) host, port)) {

        char data[128];
        snprintf(data, sizeof(data), "%s,device=%s value=%s", topic, getSetting("hostname").c_str(), String(payload).c_str());
        DEBUG_MSG_P(PSTR("[HTTPGET] Data: %s\n"), data);

        char request[256];
        snprintf(request, sizeof(request), "POST /write?db=%s&u=%s&p=%s HTTP/1.1\r\nHost: %s:%u\r\nContent-Length: %d\r\n\r\n%s",
            getSetting("hgetDatabase", HTTPGET_DATABASE).c_str(),
            getSetting("hgetUsername", HTTPGET_USERNAME).c_str(), getSetting("hgetPassword", HTTPGET_PASSWORD).c_str(),
            host, port, strlen(data), data);

        if (_hget_client.printf(request) > 0) {
            while (_hget_client.connected() && _hget_client.available() == 0) delay(1);
            while (_hget_client.available()) _hget_client.read();
            if (_hget_client.connected()) _hget_client.stop();
            success = true;
        } else {
            DEBUG_MSG_P(PSTR("[HTTPGET] Sent failed\n"));
        }

        _hget_client.stop();
        while (_hget_client.connected()) yield();

    } else {
        DEBUG_MSG_P(PSTR("[HTTPGET] Connection failed\n"));
    }

    free(host);
    return success;

}

bool hgetEnabled() {
    return _hget_enabled;
}

void hgetSetup() {

    _hgetConfigure();

    #if WEB_SUPPORT
        wsOnSendRegister(_hgetWebSocketOnSend);
        wsOnReceiveRegister(_hgetWebSocketOnReceive);
    #endif

    #if BROKER_SUPPORT
        brokerRegister(_hgetBrokerCallback);
    #endif

    // Main callbacks
    espurnaRegisterReload(_hgetConfigure);

}

#endif
