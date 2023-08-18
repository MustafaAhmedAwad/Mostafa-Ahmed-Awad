#include <stdio.h>
int main()
{

    char grade;

    printf ("Enter a letter grade: ");
    scanf("%s", &grade);

    grade = toupper(grade); // this is will make it acccept lower and upper letters

    switch(grade)
    {
        case 'A':
        printf ("perfect!\n");
        break;

        case 'B':
        printf ("you did good!\n");
        break;

        case 'C':
        printf ("you did okay!\n");
        break;

        case 'D':
        printf ("at least it's not an f!\n");
        break;

        case 'F':
        printf ("you faild!\n");
        break;

        default: 
        printf ("please enter only valid grades: ");
    }

    return 0;
}