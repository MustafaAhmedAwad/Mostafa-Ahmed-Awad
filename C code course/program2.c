#include <stdio.h>

// this program is to calculate the area & circumference of the circle

int main()
{

    const double PI = 3.14159;
    double radius; 
    double circumference;
    double area;

    printf("Enter Circle Radius:\n");
    scanf("%lf", &radius);

    circumference = 2 * PI * radius;
    area = PI * radius * radius;

    printf ("circumference = %.2lfm\n", circumference);
    printf ("area = %.2lfm2\n", area);

    return 0;

}