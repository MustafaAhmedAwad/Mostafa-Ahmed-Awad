#include<stdio.h>
void edit (int x)                    //function prototype
{
    printf("before increment x:%d\n", x);
    x=++x;                                   //function implementation
    printf("after increment x:%d\n", x);

}
int main (){
    int x[3]={5,20,80};                         //array 
    printf("the num stored in the array x:\n");
    for (int i=0; i<3 ;i++){                         //for loop to print the number
        printf("%d\n",x[i]);
    } 
printf("\n");
    for (int i=0; i<3; i++){                    //for loop and call the function to print the number after increment
    edit(x[i]);
    }

}