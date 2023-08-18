#include <stdio.h>

/*
Write a program that take a number from user using scanf,
lf the number was even print the following two sentences

Name : Hossam Naibl GROUP 9

*/

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);


    if (number & 1) {
        printf("The number is odd = 1\n");
        printf("The number is even = 0\n");
    } else {
        printf("The number is odd = 0\n");
        printf("The number is even = 1\n");
    }

    return 0;
}
