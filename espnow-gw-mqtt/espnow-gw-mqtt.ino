//  FARM DATA RELAY SYSTEM
//
//  GATEWAY 2.000
//  MQTT Gateway => esp8266-01s ()
//
//  Developed by Timm Bogner (timmbogner@gmail.com) in Urbana, Illinois, USA.
//
/*
  PIN CONNECTIONS
  -------------------------------
  ESP8266-01s - ESP32-S - 38pin dev board
  -------------------------------
  VCC  -> 3.3V
  CHPD -> 3.3V
  GND  -> GND
  RX0  -> TXD0
  TX0  -> RXD0
  -------------------------------
  -------------------------------

*/
//= DEFINES ========================================================================================
//#define DEBUG

#if defined(ESP8266)
// interrupt handler and related code must be in RAM on ESP8266, according to issue #46.
#define RECEIVE_ATTR ICACHE_RAM_ATTR
#define VAR_ISR_ATTR
// pins
#define ESP8266_GPIO0 0  // HIGH is 3.3V
#define ESP8266_GPIO1 1  // TX
#define ESP8266_GPIO2 2  // HIGH is 3.3V
#define ESP8266_GPIO3 3  // RX
// Built-In LED: LOW is on and HIGH is off for blue led
//#define LED_BUILTIN ESP8266_GPIO2
#endif

//= INCLUDES =======================================================================================
#include "Secrets.h"
#include "fdrs_gateway_config.h"
#include <fdrs_gateway.h>

//= CONSTANTS ======================================================================================
const char host_name[] = HOST_NAME;

//= VARIABLES ======================================================================================

//##################################################################################################
//==================================================================================================
//**************************************************************************************************
void setup() {
#ifdef DEBUG
  // Open serial communications and wait for port to open:
  // Serial.begin(115200);
  // while (!Serial) { ; }
  Serial.println(F("ESP-Now:Gateway:MQTT:START-UP >>>>>>>>>>>>>>>"));
#endif
  //..............................
  WiFi.hostname(host_name);
  //..............................
  beginFDRS();
  //..............................
#ifdef DEBUG
  Serial.println(F("ESP-Now:Gateway:MQTT:START-UP <<<<<<<<<<<<<<<"));
#endif
}
//**************************************************************************************************
//OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO
void loop() {
  loopFDRS();
}
//OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO
//==================================================================================================