#include "input.h"

#include <stdio.h>

uint32_t INPUT_GetNumber(char* input_prompt, char* confirm_message) {
    uint8_t scanned_count = 0;
    uint32_t number;

    do {
        printf("\n%s: ", input_prompt);
        scanned_count = scanf("%u", &number);
        while (getchar() != '\n');
        printf("\n%s: %u", confirm_message, number);
    } while(!(scanned_count == 1)); 

    return number;
}

uint8_t INPUT_GetMode(char* input_prompt, char* confirm_message) {
    uint32_t option = 0;
    do {
        printf("\n%s: ", input_prompt);
        scanf("%u", &option);
        while (getchar() != '\n');
        printf("\n%s: %u",confirm_message, option);
    } while(!(option >= 1 && option <= 3));

    return ((uint8_t) option);
}

char INPUT_GetOperator(char* input_prompt, char* confirm_message) {
    char operator;
    do {
        printf("\n%s: ", input_prompt);
        scanf("%c", &operator);
        while (getchar() != '\n');
        printf("\n%s: %c",confirm_message, operator);
    } while(!(operator == '+' || operator == '-' || operator == '*' || operator == '/'));

    return operator;
}