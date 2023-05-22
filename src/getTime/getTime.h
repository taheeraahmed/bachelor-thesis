/*
 * getTime.h
 * 
 * Created: 19.05.2023
 * 
 * Sourced from: https://adnbr.co.uk/articles/counting-milliseconds
 */ 

#ifndef getTime_H_
#define getTime_H_

#include <avr/interrupt.h>

/**
* @brief Initierer
*/
void initGetTime(void);

/**
* @brief Funksjon for å regne ut motstanden til R_ID for identifikajon av LED-array
*/
unsigned long getTime(void);

#endif