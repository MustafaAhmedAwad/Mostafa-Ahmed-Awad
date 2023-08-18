#include <stdio.h>
//const int x=10; run time error
void add(int x,int y);
void sub(int x,int y);
void calc(int x,int y);
int main(void)
{
/*char x =15, y=10;
char* ptr =&x;
*ptr=15;
printf("%p\n",ptr);
printf("%p\n",ptr++);
printf("%p\n",++ptr);*/

//________________________________________________________________

/*int x=0x11223344;
char* ptr =(char*)&x;
if (*ptr == 0x4)
{
    printf("little endian");

}
else{
    printf("big endian");
}*/


//________________________________________________________________

// Function declaration (prototype)
/*void swap(int* x, int* y);

    int x = 5, y = 10;

    printf("Before swapping: x = %d, y = %d\n", x, y);

    // Call the swap function with pointers to x and y
    swap(&x, &y);

    printf("After swapping: x = %d, y = %d\n", x, y);

    return 0;
}

// Function definition
void swap(int* x, int* y) {
    int temp = *x;
    *x = *y;
    *y = temp;*/
//______________________________________________________________

/*int *ptr =&x; //run time error
 *ptr=15;*/
//_________________________________________________________________
 
 /*int * ptr;
 ptr++;
printf("%p\n", ptr);*/

//_________________________________________________________________
/*int x=20;
void*ptr;
ptr=&x;

printf("%d\n",*(int *)ptr); //content of*/
//________________________________________________________  
/*int x=10;   //accsses of x double pointer
int** ptr2;
int* ptr1;
ptr2=&ptr1;
ptr1=&x;
**ptr2=15;
printf("%d\n",x); */
//_________________________________________________________________
// Function prototype for 'print'
/*void print(int x);
    int x = 25,p;

    // Declare a function pointer 'ptr' that points to a function taking an int parameter and returning void.
    void (*ptr)(int x);

    // Assign the address of the 'print' function to the function pointer 'ptr'.
    ptr = &print;

    // Call the 'print' function through the function pointer, passing the value of 'x' as an argument.
    ptr(x);

    return 0;
}

// Function definition for 'print'
void print(int x) {  pointer to function
    printf("%d\n", x);
//________________________________________________________________
int p1(int x) {  //automatic exipliction
    printf("%d\n",x);*/
//________________________________________________________________
int x=10,y=5;
calc(add,x,y);
}
void add(int x,int y) {
    printf("%d\n",x+y);
}
void sub (int x,int y) {
printf("%d\n",x-y);
}
void calc (void(*ptr)(int,int),x,y) {
ptr(x,y);
add(x,y);

}



