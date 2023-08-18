#include <stdio.h>

/*

Write a program to input any number from user and toggle or invert nth bit
of the given number using bitwise operator.

Name : Hossam Naibl GROUP 9


*/


int main() {

    unsigned int number, result;
    int bitposition;

    printf("Enter a number: ");
    scanf(" %u", &number);

    printf("Enter the bit position (0-31): ");
    scanf(" %d", &bitposition);

    if (bitposition < 0 || bitposition > 31) {
        printf("Invalid bit position! Please enter a value between 0 and 31.\n");
        return 1;
    }

    unsigned int bit = 1 << bitposition;

    result = number ^ bit;

    printf("Original number: %u\n", number);
    printf("Number after toggling bit %d: %u\n", bitposition, result);

    return 0;
}
