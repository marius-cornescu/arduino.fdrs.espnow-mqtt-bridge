//  FARM DATA RELAY SYSTEM - UART Gateway
//
//  GATEWAY 2.000
//  [ESP32 Dev]
//  Developed by Timm Bogner (timmbogner@gmail.com) in Urbana, Illinois, USA.
//
/*
  IDE board = "ESP32S2 Dev Module"

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

//= INCLUDES =======================================================================================
#include "Common.h"
#include "fdrs_gateway_config.h"
#include <fdrs_gateway.h>

//= CONSTANTS ======================================================================================

//= VARIABLES ======================================================================================

//##################################################################################################
//==================================================================================================
//**************************************************************************************************
void setup() {
#ifdef DEBUG
  // Open serial communications and wait for port to open:
  // Serial.begin(115200);
  // while (!Serial) { ; }
#endif
  debugPrintln(F("ESP-Now:Gateway:START-UP >>>>>>>>>>>>>>>"));
  //..............................
  beginFDRS();
  //..............................
  debugPrintln(F("ESP-Now:Gateway::START-UP <<<<<<<<<<<<<<<"));
}
//**************************************************************************************************
//OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO
void loop() {
  loopFDRS();
}
//OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO
//==================================================================================================