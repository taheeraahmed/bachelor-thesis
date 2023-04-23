#include "PWM/PWM.h"

void initPWM(void){
    // Configure Timer 1 for PWM8 with TOP = 0xFF
    TCCR0A |= (1 << COM0B1) | (1 << COM0A1) | (1 << WGM01) | (1 << WGM00);
    TCCR0B |= (1 << WGM02) | (1 << CS01);
    // Setter PWM pinne 8 som utgang.
    DDRH |= (1 << PIN5);
}

void setDutyCycle(uint8_t dutyCycle){
    OCR0A = dutyCycle;
    OCR0B = dutyCycle;
}
