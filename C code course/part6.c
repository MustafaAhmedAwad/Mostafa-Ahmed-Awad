#include <stdio.h>

int main()
{

    char name[25]; // 1-25 byte dont do more than this or you will get overflow
    int age;
    
    printf ("what is your name : \n"); //use this code to print
    fgets(name, 25, stdin); // use this code to take input from user with spaces also
    // fgets function have "\n" in it so you don't have to write it

    printf ("how old are you : \n");
    scanf ("%d", &age); // // use this code to take input from user without spaces


    printf ("Hi %s you have %d years old\n", name, age);

    return 0;



}