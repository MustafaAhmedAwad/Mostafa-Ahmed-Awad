#include <stdio.h>
#include <math.h>

// this program to calculate the hypotenuse of triangle

int main()
{

    double c;
    double a;
    double b;

    printf("Enter the first side of the triangle\n");
    scanf("%lf", &a);

    printf("Enter the second side of the triangle\n");
    scanf("%lf", &b);

    a = pow(a, 2);
    b = pow(b, 2);
    c = sqrt(a + b);

    printf("hyporenuse = %lf \n", c);

    return 0;

}