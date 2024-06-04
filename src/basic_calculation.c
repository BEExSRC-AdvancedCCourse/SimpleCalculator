#include "basic_calculation.h"

#include <stdio.h>
#include "input.h"

void BASIC_CALCULATION_Launch(void) {
    uint32_t first_number = INPUT_GetNumber("Enter first number", "Number received");
    char operator = INPUT_GetOperator("Enter operator [+,-,*,/]", "Operator received");
    uint32_t second_number = INPUT_GetNumber("Enter second number", "Number received");

    double result = BASIC_CALCULATION_Calculate(first_number, second_number, operator);
    BASIC_CALCULATION_Display(first_number, second_number, operator, result);
}

double BASIC_CALCULATION_Calculate(uint32_t first_number, uint32_t second_number, char operator) {
    double result = 0;

    if (operator == '+') {
        result = (double) first_number + second_number;
    }
    else if (operator == '-') {
        result = (double) first_number - second_number;
    }
    else if (operator == '*') {
        result = (double) first_number * second_number;
    }
    else if (operator == '/') {
        if (second_number == 0) return 0;
        result = (double) first_number / second_number;
    }

    return result;
}

void BASIC_CALCULATION_Display(uint32_t first_number, uint32_t second_number, char operator, double result) {
    printf("\n%u %c %u = %.15g", first_number, operator, second_number, result);
}
