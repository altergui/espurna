// -----------------------------------------------------------------------------
// DEFAULTS PER MODULE
// -----------------------------------------------------------------------------

#pragma once

// **NOTICE** that erasing settings storage will restore to these values.
// make sure these are set to some sane defaults that won't break anything

// -----------------------------------------------------------------------------
// WiFi
// -----------------------------------------------------------------------------

// (required) SSID must be set for network to be considered enabled.
// (optional) PASS with some value will require the network to use WPA (or better) authentication, otherwise it must be an OPEN network.
// (optional) IP, GW, MASK and DNS must all be defined for static configuration to be applied.
// (optional) BSSID and CHANNEL are only used when WIFI_SCAN_NETWORKS is disabled.

#ifndef WIFI1_SSID
#define WIFI1_SSID                  ""
#endif

#ifndef WIFI1_PASS
#define WIFI1_PASS                  ""
#endif

#ifndef WIFI1_IP
#define WIFI1_IP                    ""
#endif

#ifndef WIFI1_GW
#define WIFI1_GW                    ""
#endif

#ifndef WIFI1_MASK
#define WIFI1_MASK                  ""
#endif

#ifndef WIFI1_DNS
#define WIFI1_DNS                   ""
#endif

#ifndef WIFI1_BSSID
#define WIFI1_BSSID                 ""
#endif

#ifndef WIFI1_CHANNEL
#define WIFI1_CHANNEL               0
#endif

#ifndef WIFI2_SSID
#define WIFI2_SSID                  ""
#endif

#ifndef WIFI2_PASS
#define WIFI2_PASS                  ""
#endif

#ifndef WIFI2_IP
#define WIFI2_IP                    ""
#endif

#ifndef WIFI2_GW
#define WIFI2_GW                    ""
#endif

#ifndef WIFI2_MASK
#define WIFI2_MASK                  ""
#endif

#ifndef WIFI2_DNS
#define WIFI2_DNS                   ""
#endif

#ifndef WIFI2_BSSID
#define WIFI2_BSSID                 ""
#endif

#ifndef WIFI2_CHANNEL
#define WIFI2_CHANNEL               0
#endif

#ifndef WIFI3_SSID
#define WIFI3_SSID                  ""
#endif

#ifndef WIFI3_PASS
#define WIFI3_PASS                  ""
#endif

#ifndef WIFI3_IP
#define WIFI3_IP                    ""
#endif

#ifndef WIFI3_GW
#define WIFI3_GW                    ""
#endif

#ifndef WIFI3_MASK
#define WIFI3_MASK                  ""
#endif

#ifndef WIFI3_DNS
#define WIFI3_DNS                   ""
#endif

#ifndef WIFI3_BSSID
#define WIFI3_BSSID                 ""
#endif

#ifndef WIFI3_CHANNEL
#define WIFI3_CHANNEL               0
#endif

#ifndef WIFI4_SSID
#define WIFI4_SSID                  ""
#endif

#ifndef WIFI4_PASS
#define WIFI4_PASS                  ""
#endif

#ifndef WIFI4_IP
#define WIFI4_IP                    ""
#endif

#ifndef WIFI4_GW
#define WIFI4_GW                    ""
#endif

#ifndef WIFI4_MASK
#define WIFI4_MASK                  ""
#endif

#ifndef WIFI4_DNS
#define WIFI4_DNS                   ""
#endif

#ifndef WIFI4_BSSID
#define WIFI4_BSSID                 ""
#endif

#ifndef WIFI4_CHANNEL
#define WIFI4_CHANNEL               0
#endif

#ifndef WIFI5_SSID
#define WIFI5_SSID                  ""
#endif

#ifndef WIFI5_PASS
#define WIFI5_PASS                  ""
#endif

#ifndef WIFI5_IP
#define WIFI5_IP                    ""
#endif

#ifndef WIFI5_GW
#define WIFI5_GW                    ""
#endif

#ifndef WIFI5_MASK
#define WIFI5_MASK                  ""
#endif

#ifndef WIFI5_DNS
#define WIFI5_DNS                   ""
#endif

#ifndef WIFI5_BSSID
#define WIFI5_BSSID                 ""
#endif

#ifndef WIFI5_CHANNEL
#define WIFI5_CHANNEL               0
#endif


// -----------------------------------------------------------------------------
// Buttons
// -----------------------------------------------------------------------------

#ifndef BUTTON1_PIN
#define BUTTON1_PIN         GPIO_NONE
#endif
#ifndef BUTTON2_PIN
#define BUTTON2_PIN         GPIO_NONE
#endif
#ifndef BUTTON3_PIN
#define BUTTON3_PIN         GPIO_NONE
#endif
#ifndef BUTTON4_PIN
#define BUTTON4_PIN         GPIO_NONE
#endif
#ifndef BUTTON5_PIN
#define BUTTON5_PIN         GPIO_NONE
#endif
#ifndef BUTTON6_PIN
#define BUTTON6_PIN         GPIO_NONE
#endif
#ifndef BUTTON7_PIN
#define BUTTON7_PIN         GPIO_NONE
#endif
#ifndef BUTTON8_PIN
#define BUTTON8_PIN         GPIO_NONE
#endif

#ifndef BUTTON1_PIN_TYPE
#define BUTTON1_PIN_TYPE    GPIO_TYPE_HARDWARE
#endif
#ifndef BUTTON2_PIN_TYPE
#define BUTTON2_PIN_TYPE    GPIO_TYPE_HARDWARE
#endif
#ifndef BUTTON3_PIN_TYPE
#define BUTTON3_PIN_TYPE    GPIO_TYPE_HARDWARE
#endif
#ifndef BUTTON4_PIN_TYPE
#define BUTTON4_PIN_TYPE    GPIO_TYPE_HARDWARE
#endif
#ifndef BUTTON5_PIN_TYPE
#define BUTTON5_PIN_TYPE    GPIO_TYPE_HARDWARE
#endif
#ifndef BUTTON6_PIN_TYPE
#define BUTTON6_PIN_TYPE    GPIO_TYPE_HARDWARE
#endif
#ifndef BUTTON7_PIN_TYPE
#define BUTTON7_PIN_TYPE    GPIO_TYPE_HARDWARE
#endif
#ifndef BUTTON8_PIN_TYPE
#define BUTTON8_PIN_TYPE    GPIO_TYPE_HARDWARE
#endif

#ifndef BUTTON1_CONFIG
#define BUTTON1_CONFIG         BUTTON_PUSHBUTTON | BUTTON_SET_PULLUP | BUTTON_DEFAULT_HIGH
#endif
#ifndef BUTTON2_CONFIG
#define BUTTON2_CONFIG         BUTTON_PUSHBUTTON | BUTTON_SET_PULLUP | BUTTON_DEFAULT_HIGH
#endif
#ifndef BUTTON3_CONFIG
#define BUTTON3_CONFIG         BUTTON_PUSHBUTTON | BUTTON_SET_PULLUP | BUTTON_DEFAULT_HIGH
#endif
#ifndef BUTTON4_CONFIG
#define BUTTON4_CONFIG         BUTTON_PUSHBUTTON | BUTTON_SET_PULLUP | BUTTON_DEFAULT_HIGH
#endif
#ifndef BUTTON5_CONFIG
#define BUTTON5_CONFIG         BUTTON_PUSHBUTTON | BUTTON_SET_PULLUP | BUTTON_DEFAULT_HIGH
#endif
#ifndef BUTTON6_CONFIG
#define BUTTON6_CONFIG         BUTTON_PUSHBUTTON | BUTTON_SET_PULLUP | BUTTON_DEFAULT_HIGH
#endif
#ifndef BUTTON7_CONFIG
#define BUTTON7_CONFIG         BUTTON_PUSHBUTTON | BUTTON_SET_PULLUP | BUTTON_DEFAULT_HIGH
#endif
#ifndef BUTTON8_CONFIG
#define BUTTON8_CONFIG         BUTTON_PUSHBUTTON | BUTTON_SET_PULLUP | BUTTON_DEFAULT_HIGH
#endif

#ifndef BUTTON1_PRESS
#define BUTTON1_PRESS       BUTTON_ACTION_NONE
#endif
#ifndef BUTTON2_PRESS
#define BUTTON2_PRESS       BUTTON_ACTION_NONE
#endif
#ifndef BUTTON3_PRESS
#define BUTTON3_PRESS       BUTTON_ACTION_NONE
#endif
#ifndef BUTTON4_PRESS
#define BUTTON4_PRESS       BUTTON_ACTION_NONE
#endif
#ifndef BUTTON5_PRESS
#define BUTTON5_PRESS       BUTTON_ACTION_NONE
#endif
#ifndef BUTTON6_PRESS
#define BUTTON6_PRESS       BUTTON_ACTION_NONE
#endif
#ifndef BUTTON7_PRESS
#define BUTTON7_PRESS       BUTTON_ACTION_NONE
#endif
#ifndef BUTTON8_PRESS
#define BUTTON8_PRESS       BUTTON_ACTION_NONE
#endif

#ifndef BUTTON1_RELEASE
#define BUTTON1_RELEASE       BUTTON_ACTION_NONE
#endif
#ifndef BUTTON2_RELEASE
#define BUTTON2_RELEASE       BUTTON_ACTION_NONE
#endif
#ifndef BUTTON3_RELEASE
#define BUTTON3_RELEASE       BUTTON_ACTION_NONE
#endif
#ifndef BUTTON4_RELEASE
#define BUTTON4_RELEASE       BUTTON_ACTION_NONE
#endif
#ifndef BUTTON5_RELEASE
#define BUTTON5_RELEASE       BUTTON_ACTION_NONE
#endif
#ifndef BUTTON6_RELEASE
#define BUTTON6_RELEASE       BUTTON_ACTION_NONE
#endif
#ifndef BUTTON7_RELEASE
#define BUTTON7_RELEASE       BUTTON_ACTION_NONE
#endif
#ifndef BUTTON8_RELEASE
#define BUTTON8_RELEASE       BUTTON_ACTION_NONE
#endif

#ifndef BUTTON1_CLICK
#define BUTTON1_CLICK       BUTTON_ACTION_TOGGLE
#endif
#ifndef BUTTON2_CLICK
#define BUTTON2_CLICK       BUTTON_ACTION_TOGGLE
#endif
#ifndef BUTTON3_CLICK
#define BUTTON3_CLICK       BUTTON_ACTION_TOGGLE
#endif
#ifndef BUTTON4_CLICK
#define BUTTON4_CLICK       BUTTON_ACTION_TOGGLE
#endif
#ifndef BUTTON5_CLICK
#define BUTTON5_CLICK       BUTTON_ACTION_TOGGLE
#endif
#ifndef BUTTON6_CLICK
#define BUTTON6_CLICK       BUTTON_ACTION_TOGGLE
#endif
#ifndef BUTTON7_CLICK
#define BUTTON7_CLICK       BUTTON_ACTION_TOGGLE
#endif
#ifndef BUTTON8_CLICK
#define BUTTON8_CLICK       BUTTON_ACTION_TOGGLE
#endif

#ifndef BUTTON1_DBLCLICK
#define BUTTON1_DBLCLICK    BUTTON_ACTION_AP
#endif
#ifndef BUTTON2_DBLCLICK
#define BUTTON2_DBLCLICK    BUTTON_ACTION_NONE
#endif
#ifndef BUTTON3_DBLCLICK
#define BUTTON3_DBLCLICK    BUTTON_ACTION_NONE
#endif
#ifndef BUTTON4_DBLCLICK
#define BUTTON4_DBLCLICK    BUTTON_ACTION_NONE
#endif
#ifndef BUTTON5_DBLCLICK
#define BUTTON5_DBLCLICK    BUTTON_ACTION_NONE
#endif
#ifndef BUTTON6_DBLCLICK
#define BUTTON6_DBLCLICK    BUTTON_ACTION_NONE
#endif
#ifndef BUTTON7_DBLCLICK
#define BUTTON7_DBLCLICK    BUTTON_ACTION_NONE
#endif
#ifndef BUTTON8_DBLCLICK
#define BUTTON8_DBLCLICK    BUTTON_ACTION_NONE
#endif

#ifndef BUTTON1_TRIPLECLICK
#define BUTTON1_TRIPLECLICK    BUTTON_ACTION_SMART_CONFIG
#endif
#ifndef BUTTON2_TRIPLECLICK
#define BUTTON2_TRIPLECLICK    BUTTON_ACTION_NONE
#endif
#ifndef BUTTON3_TRIPLECLICK
#define BUTTON3_TRIPLECLICK    BUTTON_ACTION_NONE
#endif
#ifndef BUTTON4_TRIPLECLICK
#define BUTTON4_TRIPLECLICK    BUTTON_ACTION_NONE
#endif
#ifndef BUTTON5_TRIPLECLICK
#define BUTTON5_TRIPLECLICK    BUTTON_ACTION_NONE
#endif
#ifndef BUTTON6_TRIPLECLICK
#define BUTTON6_TRIPLECLICK    BUTTON_ACTION_NONE
#endif
#ifndef BUTTON7_TRIPLECLICK
#define BUTTON7_TRIPLECLICK    BUTTON_ACTION_NONE
#endif
#ifndef BUTTON8_TRIPLECLICK
#define BUTTON8_TRIPLECLICK    BUTTON_ACTION_NONE
#endif

#ifndef BUTTON1_LNGCLICK
#define BUTTON1_LNGCLICK    BUTTON_ACTION_RESET
#endif
#ifndef BUTTON2_LNGCLICK
#define BUTTON2_LNGCLICK    BUTTON_ACTION_NONE
#endif
#ifndef BUTTON3_LNGCLICK
#define BUTTON3_LNGCLICK    BUTTON_ACTION_NONE
#endif
#ifndef BUTTON4_LNGCLICK
#define BUTTON4_LNGCLICK    BUTTON_ACTION_NONE
#endif
#ifndef BUTTON5_LNGCLICK
#define BUTTON5_LNGCLICK    BUTTON_ACTION_NONE
#endif
#ifndef BUTTON6_LNGCLICK
#define BUTTON6_LNGCLICK    BUTTON_ACTION_NONE
#endif
#ifndef BUTTON7_LNGCLICK
#define BUTTON7_LNGCLICK    BUTTON_ACTION_NONE
#endif
#ifndef BUTTON8_LNGCLICK
#define BUTTON8_LNGCLICK    BUTTON_ACTION_NONE
#endif

#ifndef BUTTON1_LNGLNGCLICK
#define BUTTON1_LNGLNGCLICK BUTTON_ACTION_FACTORY
#endif
#ifndef BUTTON2_LNGLNGCLICK
#define BUTTON2_LNGLNGCLICK BUTTON_ACTION_NONE
#endif
#ifndef BUTTON3_LNGLNGCLICK
#define BUTTON3_LNGLNGCLICK BUTTON_ACTION_NONE
#endif
#ifndef BUTTON4_LNGLNGCLICK
#define BUTTON4_LNGLNGCLICK BUTTON_ACTION_NONE
#endif
#ifndef BUTTON5_LNGLNGCLICK
#define BUTTON5_LNGLNGCLICK BUTTON_ACTION_NONE
#endif
#ifndef BUTTON6_LNGLNGCLICK
#define BUTTON6_LNGLNGCLICK BUTTON_ACTION_NONE
#endif
#ifndef BUTTON7_LNGLNGCLICK
#define BUTTON7_LNGLNGCLICK BUTTON_ACTION_NONE
#endif
#ifndef BUTTON8_LNGLNGCLICK
#define BUTTON8_LNGLNGCLICK BUTTON_ACTION_NONE
#endif

#ifndef BUTTON1_RELAY
#define BUTTON1_RELAY       RELAY_NONE
#endif
#ifndef BUTTON2_RELAY
#define BUTTON2_RELAY       RELAY_NONE
#endif
#ifndef BUTTON3_RELAY
#define BUTTON3_RELAY       RELAY_NONE
#endif
#ifndef BUTTON4_RELAY
#define BUTTON4_RELAY       RELAY_NONE
#endif
#ifndef BUTTON5_RELAY
#define BUTTON5_RELAY       RELAY_NONE
#endif
#ifndef BUTTON6_RELAY
#define BUTTON6_RELAY       RELAY_NONE
#endif
#ifndef BUTTON7_RELAY
#define BUTTON7_RELAY       RELAY_NONE
#endif
#ifndef BUTTON8_RELAY
#define BUTTON8_RELAY       RELAY_NONE
#endif

#ifndef BUTTON1_DEBOUNCE_DELAY
#define BUTTON1_DEBOUNCE_DELAY    BUTTON_DEBOUNCE_DELAY
#endif
#ifndef BUTTON2_DEBOUNCE_DELAY
#define BUTTON2_DEBOUNCE_DELAY    BUTTON_DEBOUNCE_DELAY
#endif
#ifndef BUTTON3_DEBOUNCE_DELAY
#define BUTTON3_DEBOUNCE_DELAY    BUTTON_DEBOUNCE_DELAY
#endif
#ifndef BUTTON4_DEBOUNCE_DELAY
#define BUTTON4_DEBOUNCE_DELAY    BUTTON_DEBOUNCE_DELAY
#endif
#ifndef BUTTON5_DEBOUNCE_DELAY
#define BUTTON5_DEBOUNCE_DELAY    BUTTON_DEBOUNCE_DELAY
#endif
#ifndef BUTTON6_DEBOUNCE_DELAY
#define BUTTON6_DEBOUNCE_DELAY    BUTTON_DEBOUNCE_DELAY
#endif
#ifndef BUTTON7_DEBOUNCE_DELAY
#define BUTTON7_DEBOUNCE_DELAY    BUTTON_DEBOUNCE_DELAY
#endif
#ifndef BUTTON8_DEBOUNCE_DELAY
#define BUTTON8_DEBOUNCE_DELAY    BUTTON_DEBOUNCE_DELAY
#endif

#ifndef BUTTON1_REPEAT_DELAY
#define BUTTON1_REPEAT_DELAY    BUTTON_REPEAT_DELAY
#endif
#ifndef BUTTON2_REPEAT_DELAY
#define BUTTON2_REPEAT_DELAY    BUTTON_REPEAT_DELAY
#endif
#ifndef BUTTON3_REPEAT_DELAY
#define BUTTON3_REPEAT_DELAY    BUTTON_REPEAT_DELAY
#endif
#ifndef BUTTON4_REPEAT_DELAY
#define BUTTON4_REPEAT_DELAY    BUTTON_REPEAT_DELAY
#endif
#ifndef BUTTON5_REPEAT_DELAY
#define BUTTON5_REPEAT_DELAY    BUTTON_REPEAT_DELAY
#endif
#ifndef BUTTON6_REPEAT_DELAY
#define BUTTON6_REPEAT_DELAY    BUTTON_REPEAT_DELAY
#endif
#ifndef BUTTON7_REPEAT_DELAY
#define BUTTON7_REPEAT_DELAY    BUTTON_REPEAT_DELAY
#endif
#ifndef BUTTON8_REPEAT_DELAY
#define BUTTON8_REPEAT_DELAY    BUTTON_REPEAT_DELAY
#endif

#ifndef BUTTON1_LNGCLICK_DELAY
#define BUTTON1_LNGCLICK_DELAY    BUTTON_LNGCLICK_DELAY
#endif
#ifndef BUTTON2_LNGCLICK_DELAY
#define BUTTON2_LNGCLICK_DELAY    BUTTON_LNGCLICK_DELAY
#endif
#ifndef BUTTON3_LNGCLICK_DELAY
#define BUTTON3_LNGCLICK_DELAY    BUTTON_LNGCLICK_DELAY
#endif
#ifndef BUTTON4_LNGCLICK_DELAY
#define BUTTON4_LNGCLICK_DELAY    BUTTON_LNGCLICK_DELAY
#endif
#ifndef BUTTON5_LNGCLICK_DELAY
#define BUTTON5_LNGCLICK_DELAY    BUTTON_LNGCLICK_DELAY
#endif
#ifndef BUTTON6_LNGCLICK_DELAY
#define BUTTON6_LNGCLICK_DELAY    BUTTON_LNGCLICK_DELAY
#endif
#ifndef BUTTON7_LNGCLICK_DELAY
#define BUTTON7_LNGCLICK_DELAY    BUTTON_LNGCLICK_DELAY
#endif
#ifndef BUTTON8_LNGCLICK_DELAY
#define BUTTON8_LNGCLICK_DELAY    BUTTON_LNGCLICK_DELAY
#endif

#ifndef BUTTON1_LNGLNGCLICK_DELAY
#define BUTTON1_LNGLNGCLICK_DELAY    BUTTON_LNGLNGCLICK_DELAY
#endif
#ifndef BUTTON2_LNGLNGCLICK_DELAY
#define BUTTON2_LNGLNGCLICK_DELAY    BUTTON_LNGLNGCLICK_DELAY
#endif
#ifndef BUTTON3_LNGLNGCLICK_DELAY
#define BUTTON3_LNGLNGCLICK_DELAY    BUTTON_LNGLNGCLICK_DELAY
#endif
#ifndef BUTTON4_LNGLNGCLICK_DELAY
#define BUTTON4_LNGLNGCLICK_DELAY    BUTTON_LNGLNGCLICK_DELAY
#endif
#ifndef BUTTON5_LNGLNGCLICK_DELAY
#define BUTTON5_LNGLNGCLICK_DELAY    BUTTON_LNGLNGCLICK_DELAY
#endif
#ifndef BUTTON6_LNGLNGCLICK_DELAY
#define BUTTON6_LNGLNGCLICK_DELAY    BUTTON_LNGLNGCLICK_DELAY
#endif
#ifndef BUTTON7_LNGLNGCLICK_DELAY
#define BUTTON7_LNGLNGCLICK_DELAY    BUTTON_LNGLNGCLICK_DELAY
#endif
#ifndef BUTTON8_LNGLNGCLICK_DELAY
#define BUTTON8_LNGLNGCLICK_DELAY    BUTTON_LNGLNGCLICK_DELAY
#endif

#ifndef BUTTON1_MQTT_SEND_ALL_EVENTS
#define BUTTON1_MQTT_SEND_ALL_EVENTS    BUTTON_MQTT_SEND_ALL_EVENTS
#endif

#ifndef BUTTON2_MQTT_SEND_ALL_EVENTS
#define BUTTON2_MQTT_SEND_ALL_EVENTS    BUTTON_MQTT_SEND_ALL_EVENTS
#endif

#ifndef BUTTON3_MQTT_SEND_ALL_EVENTS
#define BUTTON3_MQTT_SEND_ALL_EVENTS    BUTTON_MQTT_SEND_ALL_EVENTS
#endif

#ifndef BUTTON4_MQTT_SEND_ALL_EVENTS
#define BUTTON4_MQTT_SEND_ALL_EVENTS    BUTTON_MQTT_SEND_ALL_EVENTS
#endif

#ifndef BUTTON5_MQTT_SEND_ALL_EVENTS
#define BUTTON5_MQTT_SEND_ALL_EVENTS    BUTTON_MQTT_SEND_ALL_EVENTS
#endif

#ifndef BUTTON6_MQTT_SEND_ALL_EVENTS
#define BUTTON6_MQTT_SEND_ALL_EVENTS    BUTTON_MQTT_SEND_ALL_EVENTS
#endif

#ifndef BUTTON7_MQTT_SEND_ALL_EVENTS
#define BUTTON7_MQTT_SEND_ALL_EVENTS    BUTTON_MQTT_SEND_ALL_EVENTS
#endif

#ifndef BUTTON8_MQTT_SEND_ALL_EVENTS
#define BUTTON8_MQTT_SEND_ALL_EVENTS    BUTTON_MQTT_SEND_ALL_EVENTS
#endif

#ifndef BUTTON1_MQTT_RETAIN
#define BUTTON1_MQTT_RETAIN    BUTTON_MQTT_RETAIN
#endif

#ifndef BUTTON2_MQTT_RETAIN
#define BUTTON2_MQTT_RETAIN    BUTTON_MQTT_RETAIN
#endif

#ifndef BUTTON3_MQTT_RETAIN
#define BUTTON3_MQTT_RETAIN    BUTTON_MQTT_RETAIN
#endif

#ifndef BUTTON4_MQTT_RETAIN
#define BUTTON4_MQTT_RETAIN    BUTTON_MQTT_RETAIN
#endif

#ifndef BUTTON5_MQTT_RETAIN
#define BUTTON5_MQTT_RETAIN    BUTTON_MQTT_RETAIN
#endif

#ifndef BUTTON6_MQTT_RETAIN
#define BUTTON6_MQTT_RETAIN    BUTTON_MQTT_RETAIN
#endif

#ifndef BUTTON7_MQTT_RETAIN
#define BUTTON7_MQTT_RETAIN    BUTTON_MQTT_RETAIN
#endif

#ifndef BUTTON8_MQTT_RETAIN
#define BUTTON8_MQTT_RETAIN    BUTTON_MQTT_RETAIN
#endif

#ifndef BUTTON1_PROVIDER
#define BUTTON1_PROVIDER    BUTTON_PROVIDER_GPIO
#endif
#ifndef BUTTON2_PROVIDER
#define BUTTON2_PROVIDER    BUTTON_PROVIDER_GPIO
#endif
#ifndef BUTTON3_PROVIDER
#define BUTTON3_PROVIDER    BUTTON_PROVIDER_GPIO
#endif
#ifndef BUTTON4_PROVIDER
#define BUTTON4_PROVIDER    BUTTON_PROVIDER_GPIO
#endif
#ifndef BUTTON5_PROVIDER
#define BUTTON5_PROVIDER    BUTTON_PROVIDER_GPIO
#endif
#ifndef BUTTON6_PROVIDER
#define BUTTON6_PROVIDER    BUTTON_PROVIDER_GPIO
#endif
#ifndef BUTTON7_PROVIDER
#define BUTTON7_PROVIDER    BUTTON_PROVIDER_GPIO
#endif
#ifndef BUTTON8_PROVIDER
#define BUTTON8_PROVIDER    BUTTON_PROVIDER_GPIO
#endif

#ifndef BUTTON1_ANALOG_LEVEL
#define BUTTON1_ANALOG_LEVEL     0
#endif
#ifndef BUTTON2_ANALOG_LEVEL
#define BUTTON2_ANALOG_LEVEL     0
#endif
#ifndef BUTTON3_ANALOG_LEVEL
#define BUTTON3_ANALOG_LEVEL     0
#endif
#ifndef BUTTON4_ANALOG_LEVEL
#define BUTTON4_ANALOG_LEVEL     0
#endif
#ifndef BUTTON5_ANALOG_LEVEL
#define BUTTON5_ANALOG_LEVEL     0
#endif
#ifndef BUTTON6_ANALOG_LEVEL
#define BUTTON6_ANALOG_LEVEL     0
#endif
#ifndef BUTTON7_ANALOG_LEVEL
#define BUTTON7_ANALOG_LEVEL     0
#endif
#ifndef BUTTON8_ANALOG_LEVEL
#define BUTTON8_ANALOG_LEVEL     0
#endif

// -----------------------------------------------------------------------------
// Encoders
// -----------------------------------------------------------------------------

#ifndef ENCODER1_PIN1
#define ENCODER1_PIN1               GPIO_NONE
#endif
#ifndef ENCODER2_PIN1
#define ENCODER2_PIN1               GPIO_NONE
#endif
#ifndef ENCODER3_PIN1
#define ENCODER3_PIN1               GPIO_NONE
#endif
#ifndef ENCODER4_PIN1
#define ENCODER4_PIN1               GPIO_NONE
#endif
#ifndef ENCODER5_PIN1
#define ENCODER5_PIN1               GPIO_NONE
#endif

#ifndef ENCODER1_PIN2
#define ENCODER1_PIN2               GPIO_NONE
#endif
#ifndef ENCODER2_PIN2
#define ENCODER2_PIN2               GPIO_NONE
#endif
#ifndef ENCODER3_PIN2
#define ENCODER3_PIN2               GPIO_NONE
#endif
#ifndef ENCODER4_PIN2
#define ENCODER4_PIN2               GPIO_NONE
#endif
#ifndef ENCODER5_PIN2
#define ENCODER5_PIN2               GPIO_NONE
#endif

#ifndef ENCODER1_BUTTON_PIN
#define ENCODER1_BUTTON_PIN         GPIO_NONE
#endif
#ifndef ENCODER2_BUTTON_PIN
#define ENCODER2_BUTTON_PIN         GPIO_NONE
#endif
#ifndef ENCODER3_BUTTON_PIN
#define ENCODER3_BUTTON_PIN         GPIO_NONE
#endif
#ifndef ENCODER4_BUTTON_PIN
#define ENCODER4_BUTTON_PIN         GPIO_NONE
#endif
#ifndef ENCODER5_BUTTON_PIN
#define ENCODER5_BUTTON_PIN         GPIO_NONE
#endif

#ifndef ENCODER1_BUTTON_LOGIC
#define ENCODER1_BUTTON_LOGIC       HIGH
#endif
#ifndef ENCODER2_BUTTON_LOGIC
#define ENCODER2_BUTTON_LOGIC       HIGH
#endif
#ifndef ENCODER3_BUTTON_LOGIC
#define ENCODER3_BUTTON_LOGIC       HIGH
#endif
#ifndef ENCODER4_BUTTON_LOGIC
#define ENCODER4_BUTTON_LOGIC       HIGH
#endif
#ifndef ENCODER5_BUTTON_LOGIC
#define ENCODER5_BUTTON_LOGIC       HIGH
#endif

#ifndef ENCODER1_BUTTON_MODE
#define ENCODER1_BUTTON_MODE        INPUT_PULLUP
#endif
#ifndef ENCODER2_BUTTON_MODE
#define ENCODER2_BUTTON_MODE        INPUT_PULLUP
#endif
#ifndef ENCODER3_BUTTON_MODE
#define ENCODER3_BUTTON_MODE        INPUT_PULLUP
#endif
#ifndef ENCODER4_BUTTON_MODE
#define ENCODER4_BUTTON_MODE        INPUT_PULLUP
#endif
#ifndef ENCODER5_BUTTON_MODE
#define ENCODER5_BUTTON_MODE        INPUT_PULLUP
#endif

#ifndef ENCODER1_MODE
#define ENCODER1_MODE               1
#endif
#ifndef ENCODER2_MODE
#define ENCODER2_MODE               1
#endif
#ifndef ENCODER3_MODE
#define ENCODER3_MODE               1
#endif
#ifndef ENCODER4_MODE
#define ENCODER4_MODE               1
#endif
#ifndef ENCODER5_MODE
#define ENCODER5_MODE               1
#endif

#ifndef ENCODER1_CHANNEL1
#define ENCODER1_CHANNEL1           0
#endif
#ifndef ENCODER2_CHANNEL1
#define ENCODER2_CHANNEL1           0
#endif
#ifndef ENCODER3_CHANNEL1
#define ENCODER3_CHANNEL1           0
#endif
#ifndef ENCODER4_CHANNEL1
#define ENCODER4_CHANNEL1           0
#endif
#ifndef ENCODER5_CHANNEL1
#define ENCODER5_CHANNEL1           0
#endif

#ifndef ENCODER1_CHANNEL2
#define ENCODER1_CHANNEL2           1
#endif
#ifndef ENCODER2_CHANNEL2
#define ENCODER2_CHANNEL2           1
#endif
#ifndef ENCODER3_CHANNEL2
#define ENCODER3_CHANNEL2           1
#endif
#ifndef ENCODER4_CHANNEL2
#define ENCODER4_CHANNEL2           1
#endif
#ifndef ENCODER5_CHANNEL2
#define ENCODER5_CHANNEL2           1
#endif

// -----------------------------------------------------------------------------
// Relays
// -----------------------------------------------------------------------------

#ifndef DUMMY_RELAY_COUNT
#define DUMMY_RELAY_COUNT     0
#endif

#ifndef RELAY1_PIN
#define RELAY1_PIN            GPIO_NONE
#endif
#ifndef RELAY2_PIN
#define RELAY2_PIN            GPIO_NONE
#endif
#ifndef RELAY3_PIN
#define RELAY3_PIN            GPIO_NONE
#endif
#ifndef RELAY4_PIN
#define RELAY4_PIN            GPIO_NONE
#endif
#ifndef RELAY5_PIN
#define RELAY5_PIN            GPIO_NONE
#endif
#ifndef RELAY6_PIN
#define RELAY6_PIN            GPIO_NONE
#endif
#ifndef RELAY7_PIN
#define RELAY7_PIN            GPIO_NONE
#endif
#ifndef RELAY8_PIN
#define RELAY8_PIN            GPIO_NONE
#endif

#ifndef RELAY1_TYPE
#define RELAY1_TYPE           RELAY_TYPE_NORMAL
#endif
#ifndef RELAY2_TYPE
#define RELAY2_TYPE           RELAY_TYPE_NORMAL
#endif
#ifndef RELAY3_TYPE
#define RELAY3_TYPE           RELAY_TYPE_NORMAL
#endif
#ifndef RELAY4_TYPE
#define RELAY4_TYPE           RELAY_TYPE_NORMAL
#endif
#ifndef RELAY5_TYPE
#define RELAY5_TYPE           RELAY_TYPE_NORMAL
#endif
#ifndef RELAY6_TYPE
#define RELAY6_TYPE           RELAY_TYPE_NORMAL
#endif
#ifndef RELAY7_TYPE
#define RELAY7_TYPE           RELAY_TYPE_NORMAL
#endif
#ifndef RELAY8_TYPE
#define RELAY8_TYPE           RELAY_TYPE_NORMAL
#endif

#ifndef RELAY1_RESET_PIN
#define RELAY1_RESET_PIN      GPIO_NONE
#endif
#ifndef RELAY2_RESET_PIN
#define RELAY2_RESET_PIN      GPIO_NONE
#endif
#ifndef RELAY3_RESET_PIN
#define RELAY3_RESET_PIN      GPIO_NONE
#endif
#ifndef RELAY4_RESET_PIN
#define RELAY4_RESET_PIN      GPIO_NONE
#endif
#ifndef RELAY5_RESET_PIN
#define RELAY5_RESET_PIN      GPIO_NONE
#endif
#ifndef RELAY6_RESET_PIN
#define RELAY6_RESET_PIN      GPIO_NONE
#endif
#ifndef RELAY7_RESET_PIN
#define RELAY7_RESET_PIN      GPIO_NONE
#endif
#ifndef RELAY8_RESET_PIN
#define RELAY8_RESET_PIN      GPIO_NONE
#endif

#ifndef RELAY1_DELAY_ON
#define RELAY1_DELAY_ON       0
#endif
#ifndef RELAY2_DELAY_ON
#define RELAY2_DELAY_ON       0
#endif
#ifndef RELAY3_DELAY_ON
#define RELAY3_DELAY_ON       0
#endif
#ifndef RELAY4_DELAY_ON
#define RELAY4_DELAY_ON       0
#endif
#ifndef RELAY5_DELAY_ON
#define RELAY5_DELAY_ON       0
#endif
#ifndef RELAY6_DELAY_ON
#define RELAY6_DELAY_ON       0
#endif
#ifndef RELAY7_DELAY_ON
#define RELAY7_DELAY_ON       0
#endif
#ifndef RELAY8_DELAY_ON
#define RELAY8_DELAY_ON       0
#endif

#ifndef RELAY1_DELAY_OFF
#define RELAY1_DELAY_OFF      0
#endif
#ifndef RELAY2_DELAY_OFF
#define RELAY2_DELAY_OFF      0
#endif
#ifndef RELAY3_DELAY_OFF
#define RELAY3_DELAY_OFF      0
#endif
#ifndef RELAY4_DELAY_OFF
#define RELAY4_DELAY_OFF      0
#endif
#ifndef RELAY5_DELAY_OFF
#define RELAY5_DELAY_OFF      0
#endif
#ifndef RELAY6_DELAY_OFF
#define RELAY6_DELAY_OFF      0
#endif
#ifndef RELAY7_DELAY_OFF
#define RELAY7_DELAY_OFF      0
#endif
#ifndef RELAY8_DELAY_OFF
#define RELAY8_DELAY_OFF      0
#endif

#ifndef RELAY1_PROVIDER
#define RELAY1_PROVIDER    RELAY_PROVIDER_GPIO
#endif
#ifndef RELAY2_PROVIDER
#define RELAY2_PROVIDER    RELAY_PROVIDER_GPIO
#endif
#ifndef RELAY3_PROVIDER
#define RELAY3_PROVIDER    RELAY_PROVIDER_GPIO
#endif
#ifndef RELAY4_PROVIDER
#define RELAY4_PROVIDER    RELAY_PROVIDER_GPIO
#endif
#ifndef RELAY5_PROVIDER
#define RELAY5_PROVIDER    RELAY_PROVIDER_GPIO
#endif
#ifndef RELAY6_PROVIDER
#define RELAY6_PROVIDER    RELAY_PROVIDER_GPIO
#endif
#ifndef RELAY7_PROVIDER
#define RELAY7_PROVIDER    RELAY_PROVIDER_GPIO
#endif
#ifndef RELAY8_PROVIDER
#define RELAY8_PROVIDER    RELAY_PROVIDER_GPIO
#endif

#ifndef RELAY1_PIN_TYPE
#define RELAY1_PIN_TYPE    GPIO_TYPE_HARDWARE
#endif
#ifndef RELAY2_PIN_TYPE
#define RELAY2_PIN_TYPE    GPIO_TYPE_HARDWARE
#endif
#ifndef RELAY3_PIN_TYPE
#define RELAY3_PIN_TYPE    GPIO_TYPE_HARDWARE
#endif
#ifndef RELAY4_PIN_TYPE
#define RELAY4_PIN_TYPE    GPIO_TYPE_HARDWARE
#endif
#ifndef RELAY5_PIN_TYPE
#define RELAY5_PIN_TYPE    GPIO_TYPE_HARDWARE
#endif
#ifndef RELAY6_PIN_TYPE
#define RELAY6_PIN_TYPE    GPIO_TYPE_HARDWARE
#endif
#ifndef RELAY7_PIN_TYPE
#define RELAY7_PIN_TYPE    GPIO_TYPE_HARDWARE
#endif
#ifndef RELAY8_PIN_TYPE
#define RELAY8_PIN_TYPE    GPIO_TYPE_HARDWARE
#endif

#ifndef RELAY1_BOOT_MODE
#define RELAY1_BOOT_MODE    RELAY_BOOT_MODE
#endif
#ifndef RELAY2_BOOT_MODE
#define RELAY2_BOOT_MODE    RELAY_BOOT_MODE
#endif
#ifndef RELAY3_BOOT_MODE
#define RELAY3_BOOT_MODE    RELAY_BOOT_MODE
#endif
#ifndef RELAY4_BOOT_MODE
#define RELAY4_BOOT_MODE    RELAY_BOOT_MODE
#endif
#ifndef RELAY5_BOOT_MODE
#define RELAY5_BOOT_MODE    RELAY_BOOT_MODE
#endif
#ifndef RELAY6_BOOT_MODE
#define RELAY6_BOOT_MODE    RELAY_BOOT_MODE
#endif
#ifndef RELAY7_BOOT_MODE
#define RELAY7_BOOT_MODE    RELAY_BOOT_MODE
#endif
#ifndef RELAY8_BOOT_MODE
#define RELAY8_BOOT_MODE    RELAY_BOOT_MODE
#endif

#ifndef RELAY1_PULSE_MODE
#define RELAY1_PULSE_MODE    RELAY_PULSE_MODE
#endif
#ifndef RELAY2_PULSE_MODE
#define RELAY2_PULSE_MODE    RELAY_PULSE_MODE
#endif
#ifndef RELAY3_PULSE_MODE
#define RELAY3_PULSE_MODE    RELAY_PULSE_MODE
#endif
#ifndef RELAY4_PULSE_MODE
#define RELAY4_PULSE_MODE    RELAY_PULSE_MODE
#endif
#ifndef RELAY5_PULSE_MODE
#define RELAY5_PULSE_MODE    RELAY_PULSE_MODE
#endif
#ifndef RELAY6_PULSE_MODE
#define RELAY6_PULSE_MODE    RELAY_PULSE_MODE
#endif
#ifndef RELAY7_PULSE_MODE
#define RELAY7_PULSE_MODE    RELAY_PULSE_MODE
#endif
#ifndef RELAY8_PULSE_MODE
#define RELAY8_PULSE_MODE    RELAY_PULSE_MODE
#endif

#ifndef RELAY1_PULSE_TIME
#define RELAY1_PULSE_TIME    RELAY_PULSE_TIME
#endif
#ifndef RELAY2_PULSE_TIME
#define RELAY2_PULSE_TIME    RELAY_PULSE_TIME
#endif
#ifndef RELAY3_PULSE_TIME
#define RELAY3_PULSE_TIME    RELAY_PULSE_TIME
#endif
#ifndef RELAY4_PULSE_TIME
#define RELAY4_PULSE_TIME    RELAY_PULSE_TIME
#endif
#ifndef RELAY5_PULSE_TIME
#define RELAY5_PULSE_TIME    RELAY_PULSE_TIME
#endif
#ifndef RELAY6_PULSE_TIME
#define RELAY6_PULSE_TIME    RELAY_PULSE_TIME
#endif
#ifndef RELAY7_PULSE_TIME
#define RELAY7_PULSE_TIME    RELAY_PULSE_TIME
#endif
#ifndef RELAY8_PULSE_TIME
#define RELAY8_PULSE_TIME    RELAY_PULSE_TIME
#endif

#ifndef RELAY1_MQTT_TOPIC_SUB
#define RELAY1_MQTT_TOPIC_SUB    ""
#endif
#ifndef RELAY2_MQTT_TOPIC_SUB
#define RELAY2_MQTT_TOPIC_SUB    ""
#endif
#ifndef RELAY3_MQTT_TOPIC_SUB
#define RELAY3_MQTT_TOPIC_SUB    ""
#endif
#ifndef RELAY4_MQTT_TOPIC_SUB
#define RELAY4_MQTT_TOPIC_SUB    ""
#endif
#ifndef RELAY5_MQTT_TOPIC_SUB
#define RELAY5_MQTT_TOPIC_SUB    ""
#endif
#ifndef RELAY6_MQTT_TOPIC_SUB
#define RELAY6_MQTT_TOPIC_SUB    ""
#endif
#ifndef RELAY7_MQTT_TOPIC_SUB
#define RELAY7_MQTT_TOPIC_SUB    ""
#endif
#ifndef RELAY8_MQTT_TOPIC_SUB
#define RELAY8_MQTT_TOPIC_SUB    ""
#endif

#ifndef RELAY1_MQTT_TOPIC_PUB
#define RELAY1_MQTT_TOPIC_PUB    ""
#endif
#ifndef RELAY2_MQTT_TOPIC_PUB
#define RELAY2_MQTT_TOPIC_PUB    ""
#endif
#ifndef RELAY3_MQTT_TOPIC_PUB
#define RELAY3_MQTT_TOPIC_PUB    ""
#endif
#ifndef RELAY4_MQTT_TOPIC_PUB
#define RELAY4_MQTT_TOPIC_PUB    ""
#endif
#ifndef RELAY5_MQTT_TOPIC_PUB
#define RELAY5_MQTT_TOPIC_PUB    ""
#endif
#ifndef RELAY6_MQTT_TOPIC_PUB
#define RELAY6_MQTT_TOPIC_PUB    ""
#endif
#ifndef RELAY7_MQTT_TOPIC_PUB
#define RELAY7_MQTT_TOPIC_PUB    ""
#endif
#ifndef RELAY8_MQTT_TOPIC_PUB
#define RELAY8_MQTT_TOPIC_PUB    ""
#endif

#ifndef RELAY1_MQTT_TOPIC_MODE
#define RELAY1_MQTT_TOPIC_MODE    RELAY_MQTT_TOPIC_MODE
#endif
#ifndef RELAY2_MQTT_TOPIC_MODE
#define RELAY2_MQTT_TOPIC_MODE    RELAY_MQTT_TOPIC_MODE
#endif
#ifndef RELAY3_MQTT_TOPIC_MODE
#define RELAY3_MQTT_TOPIC_MODE    RELAY_MQTT_TOPIC_MODE
#endif
#ifndef RELAY4_MQTT_TOPIC_MODE
#define RELAY4_MQTT_TOPIC_MODE    RELAY_MQTT_TOPIC_MODE
#endif
#ifndef RELAY5_MQTT_TOPIC_MODE
#define RELAY5_MQTT_TOPIC_MODE    RELAY_MQTT_TOPIC_MODE
#endif
#ifndef RELAY6_MQTT_TOPIC_MODE
#define RELAY6_MQTT_TOPIC_MODE    RELAY_MQTT_TOPIC_MODE
#endif
#ifndef RELAY7_MQTT_TOPIC_MODE
#define RELAY7_MQTT_TOPIC_MODE    RELAY_MQTT_TOPIC_MODE
#endif
#ifndef RELAY8_MQTT_TOPIC_MODE
#define RELAY8_MQTT_TOPIC_MODE    RELAY_MQTT_TOPIC_MODE
#endif

#ifndef RELAY1_MQTT_DISCONNECT_STATUS
#define RELAY1_MQTT_DISCONNECT_STATUS    RELAY_MQTT_DISCONNECT_STATUS
#endif
#ifndef RELAY2_MQTT_DISCONNECT_STATUS
#define RELAY2_MQTT_DISCONNECT_STATUS    RELAY_MQTT_DISCONNECT_STATUS
#endif
#ifndef RELAY3_MQTT_DISCONNECT_STATUS
#define RELAY3_MQTT_DISCONNECT_STATUS    RELAY_MQTT_DISCONNECT_STATUS
#endif
#ifndef RELAY4_MQTT_DISCONNECT_STATUS
#define RELAY4_MQTT_DISCONNECT_STATUS    RELAY_MQTT_DISCONNECT_STATUS
#endif
#ifndef RELAY5_MQTT_DISCONNECT_STATUS
#define RELAY5_MQTT_DISCONNECT_STATUS    RELAY_MQTT_DISCONNECT_STATUS
#endif
#ifndef RELAY6_MQTT_DISCONNECT_STATUS
#define RELAY6_MQTT_DISCONNECT_STATUS    RELAY_MQTT_DISCONNECT_STATUS
#endif
#ifndef RELAY7_MQTT_DISCONNECT_STATUS
#define RELAY7_MQTT_DISCONNECT_STATUS    RELAY_MQTT_DISCONNECT_STATUS
#endif
#ifndef RELAY8_MQTT_DISCONNECT_STATUS
#define RELAY8_MQTT_DISCONNECT_STATUS    RELAY_MQTT_DISCONNECT_STATUS
#endif

// -----------------------------------------------------------------------------
// LEDs
// -----------------------------------------------------------------------------

#ifndef LED1_PIN
#define LED1_PIN            GPIO_NONE
#endif
#ifndef LED2_PIN
#define LED2_PIN            GPIO_NONE
#endif
#ifndef LED3_PIN
#define LED3_PIN            GPIO_NONE
#endif
#ifndef LED4_PIN
#define LED4_PIN            GPIO_NONE
#endif
#ifndef LED5_PIN
#define LED5_PIN            GPIO_NONE
#endif
#ifndef LED6_PIN
#define LED6_PIN            GPIO_NONE
#endif
#ifndef LED7_PIN
#define LED7_PIN            GPIO_NONE
#endif
#ifndef LED8_PIN
#define LED8_PIN            GPIO_NONE
#endif

#ifndef LED1_MODE
#define LED1_MODE           LED_MODE_WIFI
#endif
#ifndef LED2_MODE
#define LED2_MODE           LED_MODE_MANUAL
#endif
#ifndef LED3_MODE
#define LED3_MODE           LED_MODE_MANUAL
#endif
#ifndef LED4_MODE
#define LED4_MODE           LED_MODE_MANUAL
#endif
#ifndef LED5_MODE
#define LED5_MODE           LED_MODE_MANUAL
#endif
#ifndef LED6_MODE
#define LED6_MODE           LED_MODE_MANUAL
#endif
#ifndef LED7_MODE
#define LED7_MODE           LED_MODE_MANUAL
#endif
#ifndef LED8_MODE
#define LED8_MODE           LED_MODE_MANUAL
#endif

#ifndef LED1_RELAY
#define LED1_RELAY          1
#endif
#ifndef LED2_RELAY
#define LED2_RELAY          2
#endif
#ifndef LED3_RELAY
#define LED3_RELAY          3
#endif
#ifndef LED4_RELAY
#define LED4_RELAY          4
#endif
#ifndef LED5_RELAY
#define LED5_RELAY          5
#endif
#ifndef LED6_RELAY
#define LED6_RELAY          6
#endif
#ifndef LED7_RELAY
#define LED7_RELAY          7
#endif
#ifndef LED8_RELAY
#define LED8_RELAY          8
#endif

#ifndef LED1_PIN_INVERSE
#define LED1_PIN_INVERSE            0
#endif
#ifndef LED2_PIN_INVERSE
#define LED2_PIN_INVERSE            0
#endif
#ifndef LED3_PIN_INVERSE
#define LED3_PIN_INVERSE            0
#endif
#ifndef LED4_PIN_INVERSE
#define LED4_PIN_INVERSE            0
#endif
#ifndef LED5_PIN_INVERSE
#define LED5_PIN_INVERSE            0
#endif
#ifndef LED6_PIN_INVERSE
#define LED6_PIN_INVERSE            0
#endif
#ifndef LED7_PIN_INVERSE
#define LED7_PIN_INVERSE            0
#endif
#ifndef LED8_PIN_INVERSE
#define LED8_PIN_INVERSE            0
#endif

// -----------------------------------------------------------------------------
// Lights
// -----------------------------------------------------------------------------

#ifndef LIGHT_ENABLE_PIN
#define LIGHT_ENABLE_PIN    GPIO_NONE
#endif

#ifndef LIGHT_CH1_PIN
#define LIGHT_CH1_PIN       GPIO_NONE
#endif

#ifndef LIGHT_CH2_PIN
#define LIGHT_CH2_PIN       GPIO_NONE
#endif

#ifndef LIGHT_CH3_PIN
#define LIGHT_CH3_PIN       GPIO_NONE
#endif

#ifndef LIGHT_CH4_PIN
#define LIGHT_CH4_PIN       GPIO_NONE
#endif

#ifndef LIGHT_CH5_PIN
#define LIGHT_CH5_PIN       GPIO_NONE
#endif

#ifndef LIGHT_CH1_INVERSE
#define LIGHT_CH1_INVERSE   0
#endif

#ifndef LIGHT_CH2_INVERSE
#define LIGHT_CH2_INVERSE   0
#endif

#ifndef LIGHT_CH3_INVERSE
#define LIGHT_CH3_INVERSE   0
#endif

#ifndef LIGHT_CH4_INVERSE
#define LIGHT_CH4_INVERSE   0
#endif

#ifndef LIGHT_CH5_INVERSE
#define LIGHT_CH5_INVERSE   0
#endif

// -----------------------------------------------------------------------------
// my92xx
// -----------------------------------------------------------------------------

#ifndef MY92XX_CHANNELS
#define MY92XX_CHANNELS     0
#endif

#ifndef MY92XX_CH1
#define MY92XX_CH1          0
#endif

#ifndef MY92XX_CH2
#define MY92XX_CH2          1
#endif

#ifndef MY92XX_CH3
#define MY92XX_CH3          2
#endif

#ifndef MY92XX_CH4
#define MY92XX_CH4          3
#endif

#ifndef MY92XX_CH5
#define MY92XX_CH5          4
#endif

// -----------------------------------------------------------------------------
// Tuya
// -----------------------------------------------------------------------------

#ifndef TUYA_CH_STATE_DPID
#define TUYA_CH_STATE_DPID  0
#endif

#ifndef TUYA_CH1_DPID
#define TUYA_CH1_DPID       0
#endif

#ifndef TUYA_CH2_DPID
#define TUYA_CH2_DPID       0
#endif

#ifndef TUYA_CH3_DPID
#define TUYA_CH3_DPID       0
#endif

#ifndef TUYA_CH4_DPID
#define TUYA_CH4_DPID       0
#endif

#ifndef TUYA_CH5_DPID
#define TUYA_CH5_DPID       0
#endif

#ifndef TUYA_SW1_DPID
#define TUYA_SW1_DPID       0
#endif

#ifndef TUYA_SW2_DPID
#define TUYA_SW2_DPID       0
#endif

#ifndef TUYA_SW3_DPID
#define TUYA_SW3_DPID       0
#endif

#ifndef TUYA_SW4_DPID
#define TUYA_SW4_DPID       0
#endif

#ifndef TUYA_SW5_DPID
#define TUYA_SW5_DPID       0
#endif

#ifndef TUYA_SW6_DPID
#define TUYA_SW6_DPID       0
#endif

#ifndef TUYA_SW7_DPID
#define TUYA_SW7_DPID       0
#endif

#ifndef TUYA_SW8_DPID
#define TUYA_SW8_DPID       0
#endif

// -----------------------------------------------------------------------------
// UART
// -----------------------------------------------------------------------------

#ifndef UART1_BAUDRATE
#define UART1_BAUDRATE              115200
#endif

#ifndef UART1_TX_PIN
#define UART1_TX_PIN                1
#endif

#ifndef UART1_RX_PIN
#define UART1_RX_PIN                3
#endif

#ifndef UART1_DATA_BITS
#define UART1_DATA_BITS             8
#endif

#ifndef UART1_PARITY
#define UART1_PARITY                None
#endif

#ifndef UART1_STOP_BITS
#define UART1_STOP_BITS             1
#endif

#ifndef UART1_INVERT
#define UART1_INVERT                0
#endif

#ifndef UART2_BAUDRATE
#define UART2_BAUDRATE              115200
#endif

#ifndef UART2_TX_PIN
#define UART2_TX_PIN                GPIO_NONE
#endif

#ifndef UART2_RX_PIN
#define UART2_RX_PIN                GPIO_NONE
#endif

#ifndef UART2_DATA_BITS
#define UART2_DATA_BITS             8
#endif

#ifndef UART2_PARITY
#define UART2_PARITY                None
#endif

#ifndef UART2_STOP_BITS
#define UART2_STOP_BITS             1
#endif

#ifndef UART2_INVERT
#define UART2_INVERT                0
#endif

#ifndef UART3_BAUDRATE
#define UART3_BAUDRATE              115200
#endif

#ifndef UART3_TX_PIN
#define UART3_TX_PIN                GPIO_NONE
#endif

#ifndef UART3_RX_PIN
#define UART3_RX_PIN                GPIO_NONE
#endif

#ifndef UART3_DATA_BITS
#define UART3_DATA_BITS             8
#endif

#ifndef UART3_PARITY
#define UART3_PARITY                None
#endif

#ifndef UART3_STOP_BITS
#define UART3_STOP_BITS             1
#endif

#ifndef UART3_INVERT
#define UART3_INVERT                0
#endif

// -----------------------------------------------------------------------------
// General
// -----------------------------------------------------------------------------

// Device name (DNS, SoftAP SSID, ALEXA etc.)
// If empty, default will be ESPURNA-XXXXXX, where XXXXXX is last 3 octets of chipID
// When set, must be 1..31 characters. See:
// https://github.com/xoseperez/espurna/issues/921
// https://github.com/xoseperez/espurna/issues/1151
#ifndef HOSTNAME
#define HOSTNAME                ""
#endif
