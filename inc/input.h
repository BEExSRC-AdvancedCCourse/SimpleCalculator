#ifndef INPUT_H
#define INPUT_H

#include <stdint.h>

/*
    Function: INPUT_GetNumber
    ------------------------
    Prompts the user to enter a number and returns the inputted value as an unsigned 32-bit integer.

    input_prompt: The prompt message to display to the user.
    confirm_message: The message to display after receiving the input.

    returns: The inputted number as an unsigned 32-bit integer.
*/
uint32_t INPUT_GetNumber(char* input_prompt, char* confirm_message);

/*
    Function: INPUT_GetMode
    ----------------------
    Prompts the user to select a mode and returns the selected mode as an unsigned 8-bit integer.

    input_prompt: The prompt message to display to the user.
    confirm_message: The message to display after receiving the input.

    returns: The selected mode as an unsigned 8-bit integer.
*/
uint8_t INPUT_GetMode(char* input_prompt, char* confirm_message);

/*
    Function: INPUT_GetOperator
    --------------------------
    Prompts the user to enter an operator and returns the inputted operator as a character.

    input_prompt: The prompt message to display to the user.
    confirm_message: The message to display after receiving the input.

    returns: The inputted operator as a character.
*/
char INPUT_GetOperator(char* input_prompt, char* confirm_message);

#endif