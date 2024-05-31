#ifndef INPUT_H
#define INPUT_H

#include <stdint.h>

uint32_t INPUT_GetNumber(char* input_prompt, char* confirm_message);
uint8_t INPUT_GetMode(char* input_prompt, char* confirm_message);
char INPUT_GetOperator(char* input_prompt, char* confirm_message);

#endif