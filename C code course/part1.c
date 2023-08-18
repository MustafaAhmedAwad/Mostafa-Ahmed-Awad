// this for writing comments

// vv link section vv
#include <stdio.h> // this is the library that we use to run printf and scanf

//stdio.h means standard input output header file

// vv main section vv
main () // this is a fuction to start running the code below
{
    // printf is used to print what in side this ("blabla")
    // \n to make new line after the preinted string
    // \t this is used to make tab button space
    // \a this is used to make alert sounde
    // ; this is used to end this line of code this is important
    printf("hello\nworld\n");
    printf("hello\tworld\n");
    printf("hello\aworld\n");


    // scanf is used to make input for user
    // go to part 2 file
    char a;
    scanf("%c", &a);
    printf("this is what you write = %C\n",a);
}
