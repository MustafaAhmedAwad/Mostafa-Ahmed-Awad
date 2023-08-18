#include <stdio.h>
 int main() // int befor main is used for the return 
 // this means it will check if the code have error
 // so if return 0 the code is correct and if the code is wrong it will return 1
{

    int x = 10;
    float f = 2.35;
    char c = 'a';
    char q = '\?'; // this is to make question marks work and any like that

    // so how to make constant for varibles to make it never change

    const int r = 2; // this make r is constant value 2
    
    //ex. for the non-constant
    printf("type first number:");
    scanf("%d", &x);
    printf("the first number is: %d\n", x);

    //ex. for the constant
    printf("type second number:");
    scanf("%d", &r);
    printf("the second number is: %d", r);



    return 0;
}