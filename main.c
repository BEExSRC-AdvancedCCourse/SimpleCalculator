#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

#include "input.h"
#include "basic_calculation.h"

#define UI_Print(...) printf(__VA_ARGS__)

typedef struct
{
    char mode_name[100];
    void (*launch) (void);
} sc_handle_t;

sc_handle_t sc_handle[] = {
    {
        .mode_name = "Basic Calculation",
        .launch = BASIC_CALCULATION_Launch
    },
    {
        .mode_name = "GCD",
        .launch = NULL
    },
    {
        .mode_name = "Exit",
        .launch = NULL
    }
};

const int number_of_mode = sizeof(sc_handle) / sizeof(sc_handle[0]);

int main() {
    while(1) {
        printf("\nSIMPLE CALCULATOR");

        // Printing the menu options
        for (int i = 0; i < number_of_mode; i++) {
            UI_Print("\n%d. %s", i + 1, sc_handle[i].mode_name);
        }

        // Getting the mode option from the user using a custom function
        uint8_t option = INPUT_GetMode("Select mode [1-3]", "Mode selected");

        sc_handle[option - 1].launch();

        // if (option == 1) {
        //     // Getting inputs for basic calculation
        //     uint32_t first_number = INPUT_GetNumber("Enter first number", "Number received");
        //     char operator = INPUT_GetOperator("Enter operator [+,-,*,/]", "Operator received");
        //     uint32_t second_number = INPUT_GetNumber("Enter second number", "Number received");

        //     // Performing the calculation based on the operator
        //     switch (operator)
        //     {
        //     case '+':
        //         printf("\n%u + %u = %u", first_number, second_number, first_number + second_number);
        //         break;
                
        //     case '-':
        //         printf("\n%u - %u = %d", first_number, second_number, first_number - second_number);
        //         break;

        //     case '*':
        //         printf("\n%u * %u = %llu", first_number, second_number, (unsigned long long) first_number * second_number);
        //         break;

        //     case '/':
        //         printf("\n%u / %u = %.15g", first_number, second_number, (double) first_number / second_number);
        //         break;
            
        //     default:
        //         break;
        //     }
        // }
        // else if (option == 2) {
        //     // Getting inputs for GCD calculation
        //     uint32_t first_number = INPUT_GetNumber("Enter first number", "Number received");
        //     uint32_t second_number = INPUT_GetNumber("Enter second number", "Number received");

        //     // Finding the GCD using a loop
        //     uint32_t gcd = (first_number < second_number) ? first_number : second_number;

        //     for (;gcd >= 1;gcd--) {
        //         if (first_number % gcd == 0 && second_number % gcd == 0) 
        //             break;
        //     }

        //     printf("\nGCD(%u, %u) = %u", first_number, second_number, gcd);
        // }
        // else if (option == 3) {
        //     printf("\nExit program!");
        //     // Exiting the program
        //     exit(0);
        // }
    }

 

    return 0;
}
