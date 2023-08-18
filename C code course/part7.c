#include <stdio.h>
#include <math.h> // math library functions for more operations 

int main()
{

    double a = sqrt(9); //جذر 
    double b = pow(2, 4); // اس باور4^2
    int c = round(3.6); // تقريب للاكبر او للاصغر على حسب
    int d = ceil(3.14); // تقريب للاكبر
    int e = floor( 3.99); // تقريب للاصغر
    double f = fabs(-100); // التحويل القيمة الى موجب abselout
    double g = log(3); // logarithem
    double h = sin(45); // صاين
    double i = cos(45); // كوصاين
    double j = tan(45); // تان

    printf("the value is = %lf\n", a);
    printf("the value is = %lf\n", b);
    printf("the value is = %d\n", c);
    printf("the value is = %d\n", d);
    printf("the value is = %d\n", e);
    printf("the value is = %lf\n", f);
    printf("the value is = %lf\n", g);
    printf("the value is = %lf\n", h);
    printf("the value is = %lf\n", i);
    printf("the value is = %lf\n", j);

    return 0;

    // for more examples see program 2.c and 3.c

}