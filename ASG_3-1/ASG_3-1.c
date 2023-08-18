#include <stdio.h>
void swap(int x, int y ){                          //function prototype
    printf("before swaping x=%d\n y=%d\n",x,y);    //funcation body 
x=x^y;
y=x^y;
x=x^y;
    printf("after swaping x=%d\n y=%d\n",x,y);
    }
int main(){
int x, y;
//input
printf ("first number:");
 scanf ("%d", &x);
 printf ("second number:");
 scanf ("%d", &y);  

 //swap
 swap(x,y);                                        //call function 
}
