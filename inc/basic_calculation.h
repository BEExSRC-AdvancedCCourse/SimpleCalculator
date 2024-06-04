#ifndef BASIC_CALCULATION_H
#define BASIC_CALCULATION_H

#include <stdint.h>

void BASIC_CALCULATION_Launch(void);
double BASIC_CALCULATION_Calculate(uint32_t first_number, uint32_t second_number, char operator);
void BASIC_CALCULATION_Display(uint32_t first_number, uint32_t second_number, char operator, double result);

#endif