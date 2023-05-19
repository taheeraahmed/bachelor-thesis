#include <SD.h>
#include <stdio.h>
#include <string.h>
#include <Arduino.h>

char *createFileName(char *type, uint8_t patient_id, uint8_t experiment_id);
void createFile(char *headers, char *filename, char* type, uint8_t patient_id, uint8_t experiment_id);
void writeToFile(char *filename, char *data);
void initSD();
uint8_t getExperimentId(void);
char *convertDataToChar(uint8_t temp_pcb, uint8_t temp_air, uint8_t temp_skin, uint8_t temp_led, const char *timestamp);
char *convertErrorToChar(uint8_t error_code, const char *error_message, const char *timestamp);
uint8_t checkIfFileExists(char *filename);