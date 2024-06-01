#include "input.h"

#include <stdio.h>

// Prompts the user to enter a number and returns the inputted value as an unsigned 32-bit integer.
uint32_t INPUT_GetNumber(char* input_prompt, char* confirm_message) {
    uint8_t scanned_count = 0;
    uint32_t number;

    do {
        printf("\n%s: ", input_prompt);
        scanned_count = scanf("%u", &number); // Read the inputted number from the user
        while (getchar() != '\n'); // Clear the input buffer. Input buffer always end with Enter ('\n')
        printf("\n%s: %u", confirm_message, number); // Display the confirmed number to the user
    } while(!(scanned_count == 1)); // Repeat until a valid number is inputted

    return number;
}

// Prompts the user to select a mode and returns the selected mode as an unsigned 8-bit integer.
uint8_t INPUT_GetMode(char* input_prompt, char* confirm_message) {
    uint32_t option = 0;
    do {
        printf("\n%s: ", input_prompt);
        scanf("%u", &option); // Read the selected mode from the user
        while (getchar() != '\n'); // Clear the input buffer. Input buffer always end with Enter ('\n')
        printf("\n%s: %u",confirm_message, option); // Display the confirmed mode to the user
    } while(!(option >= 1 && option <= 3)); // Repeat until a valid mode is selected

    return ((uint8_t) option);
}

// Prompts the user to enter an operator and returns the inputted operator as a character.
char INPUT_GetOperator(char* input_prompt, char* confirm_message) {
    char operator;
    do {
        printf("\n%s: ", input_prompt);
        scanf("%c", &operator); // Read the inputted operator from the user
        while (getchar() != '\n'); // Clear the input buffer. Input buffer always end with Enter ('\n')
        printf("\n%s: %c",confirm_message, operator); // Display the confirmed operator to the user
    } while(!(operator == '+' || operator == '-' || operator == '*' || operator == '/')); // Repeat until a valid operator is inputted

    return operator;
}