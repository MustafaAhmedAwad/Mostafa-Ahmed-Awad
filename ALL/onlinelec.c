#include<stdio.h>
#include<stdlib.h>
#include<math.h>
/*int main()
{ float x,temperature,c,f ;
char y;
    printf("inter the temperature \n");
    scanf("%f", &x);
    printf("inter the unit temperature c or f\n");
    scanf(" %c",&y);
    if (y =='c'){
        temperature=(x-32)*5/9;
        printf("the temperature in f is %f\n",temperature);
    }
    else {
        temperature=(x*9/5)+32;
        printf("the temperature in c is %f",temperature);
    }
}*/


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



/*int main()   /*login system scanf pass and compare 
{
int pass=12345;
int password,i;
printf("please enter your password\n");
scanf("%d",&password);
 if(password==pass){
    printf("welcome you are loged in\n");
 }
 else{
for (i=0;i<3;i++){
    printf("wrong password try again\n");
    scanf("%d",&password);
    if(password==pass){
        printf("welcome you are loged in\n");
        break;
    }
}
 }
 if (i==3)

    printf("the system is locked");
 }*/
 

 ///////////////////////////another code (for with condition)/////////////////////////////////////////////////////////////////////



/*for (int i = 0; (i < 3) && (password != pass); i++) {
        printf("Please enter your password: ");
        scanf("%d", &password);

        if (password == pass) {
            printf("Welcome! You are logged in.\n");
        } else {
            printf("Invalid password. Attempts left: %d\n", 3 - i - 1);
        }
    }

    if (password != pass) {
        printf("System is blocked.\n");
    }*/


    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


/*int math(int x, int n) {      
    return x * n;
}

int main() {
    int x;
    printf("Enter the number: ");
    scanf("%d", &x);

    for (int i = 0; i <= 10; i++) {
        int result = math(x, i);
        printf("Result of %d * %d = %d\n", x, i, result);
    }

    return 0;
}*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

 /*int main (){
    int x,y;
    printf("Enter the number1: ");
    scanf("%d", &x);
printf("Enter the number2: ");
    scanf("%d", &y);

switch (x>y&&x!=y){
    case 1:printf("Max is %d\n",x);
break;    
  case 0:printf("Max is %d\n",y);
    break;
   switch (x=y){
case 1: printf("the two numbers are equal\n");
break;
   }}}*/

   ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


/*int main() {
    int rows, i, j; 

    printf("Enter the number of rows for the pyramid: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        // Print spaces before the stars
        for (j = 1; j <= rows - i; j++) {
            printf(" ");
        }

        // Print stars
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }

        // Move to the next line
        printf("\n");
    }

    return 0;
}*/

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


/*float sqr1(float x); // Declare the function before main

int main() {
    float x, result;

    printf("Enter the number: ");
    scanf("%f", &x);

    result = sqr1(x); // Call the sqr1 function and store the result in the 'result' variable

    printf("result = %f\n", result);

    return 0;
}

float sqr1(float x) {
    float result = sqrt(x); // Calculate the square root of x and store it in the 'result' variable
    return result; // Return the calculated result
}*/

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main ()
{
    
}





