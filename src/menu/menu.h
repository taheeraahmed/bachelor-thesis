#ifndef MENU_H
#define MENU_H

#include <avr/io.h>
#include <stdbool.h>
#include <Arduino.h>
#include <util/delay.h>
#include "Screen/Screen.h"
#include "Keypad.h"
#include "utils/utils.h"

//void RunMenu(void);
void RunScientistMenu(void);
void RunUserMenu(void);
void systemWaiting(void);

void waitForPassword(void);
void setPatientID(void);
void setTime();
void showLed(uint8_t ledHead);
void chooseNIRsettings(void);
void chooseMode(void);
void showSettings(void);
void SaveOrExit(void);
/*
void getSkinContact(void);
void selectStartButton(void);
void runExperiment(void);
void exitExperiment(void);
*/
#endif