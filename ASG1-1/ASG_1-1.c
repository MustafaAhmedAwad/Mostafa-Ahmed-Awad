#include<stdio.h>
int main(){
int number;
printf("Enter a number\n"); //the sentence printed on interface
scanf("%d",&number);//user input a num with data type short signed int
if (number&1){          // if condition without modulus operator here using AND  to check if lest sign bit is 1 or 0 if it 1 the num is odd if 0 the num is even
 printf("The number is odd=1\n"); //odd is high
 printf("The number is even=0");  } //even is low
else{
        printf("The number is odd=0\n");
        printf("The number is even=1");}
}
/*we can use modulus operator to know the remainder of divided if 0 the num is even else is odd*/
