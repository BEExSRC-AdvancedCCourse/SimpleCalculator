#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

uint32_t get_input_number(char* input_prompt, char* confirm_message) {
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

uint8_t get_input_mode(char* input_prompt, char* confirm_message) {
    uint32_t option = 0;
    do {
        printf("\n%s: ", input_prompt);
        scanf("%u", &option);
        while (getchar() != '\n');
        printf("\n%s: %u",confirm_message, option);
    } while(!(option >= 1 && option <= 3));

    return ((uint8_t) option);
}

char get_input_operator(char* input_prompt, char* confirm_message) {
    char operator;
    do {
        printf("\n%s: ", input_prompt);
        scanf("%c", &operator);
        while (getchar() != '\n');
        printf("\n%s: %c",confirm_message, operator);
    } while(!(operator == '+' || operator == '-' || operator == '*' || operator == '/'));

    return operator;
}

int main() {
    while(1) {
        printf("\nSIMPLE CALCULATOR");

        printf("\n1. Basic Calculation");
        printf("\n2. GCD");
        printf("\n3. Exit");

        

        uint8_t option = get_input_mode("Select mode [1-3]", "Mode selected");

        if (option == 1) {
            uint32_t first_number = get_input_number("Enter first number", "Number received");
            char operator = get_input_operator("Enter operator [+,-,*,/]", "Operator received");
            uint32_t second_number = get_input_number("Enter second number", "Number received");

            switch (operator)
            {
            case '+':
                printf("\n%u + %u = %u", first_number, second_number, first_number + second_number);
                break;
                
            case '-':
                printf("\n%u - %u = %d", first_number, second_number, first_number - second_number);
                break;

            case '*':
                printf("\n%u * %u = %llu", first_number, second_number, (unsigned long long) first_number * second_number);
                break;

            case '/':
                printf("\n%u / %u = %.15g", first_number, second_number, (double) first_number / second_number);
                break;
            
            default:
                break;
            }
        }
        else if (option == 2) {
            uint32_t first_number, second_number;

            printf("\nEnter first number: ");
            scanf("%u", &first_number);
            printf("First number: %u\n", first_number);

            printf("\nEnter second number: ");
            scanf("%u", &second_number); 
            printf("Second number: %u", second_number);

            uint32_t gcd = (first_number < second_number) ? first_number : second_number;

            for (;gcd >= 1;gcd--) {
                if (first_number % gcd == 0 && second_number % gcd == 0) 
                    break;
            }

            printf("\nGCD(%u, %u) = %u", first_number, second_number, gcd);
        }
        else if (option == 3) {
            printf("\nExit program!");
            exit(0);
        }
    }

 

    return 0;
}