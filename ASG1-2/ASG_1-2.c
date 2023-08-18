#include<stdio.h>
int main()
{
    int a,b,k;
    printf("input the num\n"); //input the num
    scanf("%d",&a); //user input
    printf("inter the postion(k) to toggle from 0 to 31 \n"); //choose the postion to toggle
    scanf("%d",&k); //user input
    b=1<<(k-1); //the battern that constrain moving of the K (postion)
    printf("%d",a^b);//output usin betwise xor that will toggle
}
