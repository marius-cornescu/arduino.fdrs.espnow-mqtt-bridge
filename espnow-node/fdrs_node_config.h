//  FARM DATA RELAY SYSTEM
//
//  Sensor Configuration

#include <fdrs_globals.h>

#define READING_ID    2   //Unique ID for this sensor
#define GTWY_MAC      0x01 //Address of the nearest gateway

#define USE_ESPNOW
//#define USE_LORA
#define DEEP_SLEEP
//#define POWER_CTRL    14
//#define FDRS_DEBUG

// LoRa Configuration
// #define RADIOLIB_MODULE SX1276
// #define LORA_SS    18
// #define LORA_RST   14
// #define LORA_DIO   26
// #define LORA_BUSY  33
//#define USE_SX126X

// #define LORA_TXPWR 17   // LoRa TX power in dBm (: +2dBm - +17dBm (for SX1276-7) +20dBm (for SX1278))
// #define LORA_ACK        // Request LoRa acknowledgment.

// NTP Time settings for gateways
#define DST_RULE        EUDST // Daylight saving time rules: Use USDST for United States DST rules, EUDST for European Union
#define TIME_SERVER       "0.us.pool.ntp.org"       // NTP time server to use. If FQDN at least one DNS server is required to resolve name
#define STD_OFFSET      (-1)                // Local standard time offset in hours from UTC - if unsure, check https://time.is
#define DST_OFFSET      (STD_OFFSET + 1)    // Local savings time offset in hours from UTC - if unsure, check https://time.is
#define TIME_FETCHNTP     60      // Time, in minutes, between fetching time from NTP server
#define TIME_PRINTTIME    15     // Time, in minutes, between printing local time to debug
#define TIME_SEND_INTERVAL 10    // Time, in minutes, between sending out time to remote devices.  0 will only send when time is updated