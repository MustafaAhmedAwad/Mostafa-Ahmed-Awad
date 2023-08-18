#include <stdio.h>

/*
Implement a calculator program that asks the user to enter a mathematical
operator

Name : Hossam Naibl GROUP 9

*/

int main()
{

    float result;
    float num1;
    float num2;
    char operator;


    printf("Enter  first number: ");
    scanf(" %f", &num1);

    printf("Enter operator from these (* - + /): ");
    scanf(" %c", &operator);

    printf("Enter second number: ");
    scanf(" %f", &num2);

    switch(operator) {
        case '+':
        result = num1 + num2;
        printf("the value of %.1f %c %.1f = %.1f\n", num1, operator, num2, result);
        break;

        case '-':
        result = num1 - num2;
        printf("the value of %.1f %c %.1f = %.1f\n", num1, operator, num2, result);
        break;

        case '*':
        result = num1 * num2;
        printf("the value of %.1f %c %.1f = %.1f\n", num1, operator, num2, result);
        break;

        case '/':
        result = num1 / num2;
        printf("the value of %.1f %c %.1f = %.1f\n", num1, operator, num2, result);
        break;
        default: printf("Please Enter only the valid operator (* - + /)\n");


        
    }



    return 0;



}