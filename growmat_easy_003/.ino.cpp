#ifdef __IN_ECLIPSE__
//This is a automatic generated file
//Please do not modify this file
//If you touch this file your change will be overwritten during the next build
//This file has been generated on 2017-09-11 17:46:30

#include "Arduino.h"
#include "libraries/MLP/filter.h"
#include "libraries/RF433/RF433.h"
#include <avr/wdt.h>
#include "libraries/OneWire/OneWire.h"
#include "libraries/DallasTemperature/DallasTemperature.h"
#include <Wire.h>
#include "libraries/Sim800l/Sim800l.h"
#include <SoftwareSerial.h>
#include "libraries/RTClib/RTClib.h"
#include "libraries/DHT-sensor-library-master/DHT.h"
#include "libraries/NewliquidCrystal/LiquidCrystal_I2C.h"
#include "libraries/Keypad_I2C/Keypad_I2C.h"
#include "libraries/Keypad/Keypad.h"
#include "libraries/OMEEPROM/OMEEPROM.h"
#include "libraries/OMMenuMgr/OMMenuMgr.h"
int saveMessage(char msg[], char status) ;
void readMessage(int index, byte* msg) ;
void serialPrintParInt(int address) ;
void serialPrintParFloat(int address) ;
void loadEEPROM() ;
void saveDefaultEEPROM() ;
void setup() ;
bool getInstrumentControl(bool a, byte mode) ;
double calcPH(double ph) ;
double calcPHTemp(double temp) ;
double analogRead(int pin, int samples);
double calcEC(long lowPulseTime, long highPulseTime) ;
boolean isConnectedWiFi() ;
boolean connectWiFi() ;
void updateTS()  ;
void loop() ;
void uiResetAction() ;
void uiDraw(char* p_text, int p_row, int p_col, int len) ;
void uiInstrument(bool instrument, byte mode) ;
void uiAlarmList() ;
void uiMeas() ;
void uiSetClock() ;
void uiSetWiFiSSID() ;
void uiSetWiFiApiKey() ;
void uiWiFiReconnect() ;
void uiSetWiFiPass() ;
void uiScreen() ;
void uiLcdPrintAlarm(bool alarmHigh, bool alarmLow) ;
void uiLcdPrintSpaces8() ;
void uiMain() ;
float getTemp(OneWire ds);

#include "growmat_easy_003.ino"


#endif
