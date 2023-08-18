#include <stdio.h>
int main()
{


    /*
        __arithmetic operations__

    1- "+" (addition)
    2- "-" (subtraction)
    3- "*" (multiplication)
    4- "/" (division) use float for acurate result in this operation
    5- "%" (modulus)
    6- "++" (increment) by 1
    7- "--" (decrement) by 1
    _______________________________________________________________

        __format specifier__

        %c = character
        %s = string (array of characters) you have to use "char data [];"
        %f = float
        %lf = double means long float (lf)
        %d = integer
        %u = unsigned integer no nigative value from 0 to 255
    ________________________________________________________________
        type this befor the format specifier ex. "%.1f"
        %.1 = decimal precision
        %1 = minimum field width
        %- = left align



    */


    int x = 10;
    int y = 4;

    int addition = x + y;
    int subtraction = x - y;
    int multiplication = x * y;
    float division = x / (float)y;
    int modulus = x % y;
    int increment = ++x;
    int decrement = --x; 

    // there is also a short cut ex.
    int g = 5;
    // the normal people do
    g = g + 2;
    printf("non shortcut value: %d\n",g);
    
    // the expert people do
    int j = 5;
    j+=2; // its called agumented assignment operator



    printf("shortcut value: %d\n", j);
    
    printf("the value is: %d\n", addition);
    printf("the value is: %d\n", subtraction);
    printf("the value is: %d\n", multiplication);
    printf("the value is: %.2f\n", division);
    printf("the value is: %d\n", modulus);
    printf("the value is: %d\n", increment);
    printf("the value is: %d\n", decrement);


    return 0;


}