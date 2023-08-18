#include <stdio.h>

/*

Write a program to check if a given number is an Armstrong Number?

Name : Hossam Naibl GROUP 9


*/


int main()
{

    int num, digit=0, result=0, mult=1, count, remain;

    printf("Please enter a number: ");
    scanf(" %d", &num);

    int d = num;

    while(d!=0)
    {
        d = d/10;
        digit++;
    }

    count = digit;
    d = num;

    while(d!=0)
    {
        remain = d%10;

        while(count!=0)
        {
            mult = mult*remain;
            count--;
        }

        result = result+mult;
        count = digit;
        d = d/10;
        mult = 1;

    }

    if(result == num)
    {
        printf("%d is an armstrong number", num);
    }
    else
    {
        printf("%d is not an armstrong number\a", num);
    }
    

    return 0;


}