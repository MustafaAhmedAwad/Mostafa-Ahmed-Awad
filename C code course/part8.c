#include <stdio.h>
int main()
{

    int age; 

    printf ("Enter your age: \n");
    scanf("%d", &age);

    if(age >= 18)
    {
        printf ("You are now signed up"); // when this is FALSE
    }

    else if (age == 0)
    {
        printf ("You cannot be sign up you  were just born!"); // it will check this if this is ture will print
    }

    else if (age < 0 )
    {
        printf ("You cannot be sign up you  haven't born yet!");// if the upove is false it will chek this if true will print    }
    }
    else
    {
        printf ("You are young to sign up ");       // if all up is false it will print this
    }

    return 0;
}
