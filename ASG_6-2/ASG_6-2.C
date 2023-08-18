#include <stdio.h>

typedef struct {
    double real;
    double imaginary;
} Complex;

Complex addComplex(Complex num1, Complex num2) {
    Complex result;
    result.real = num1.real + num2.real;
    result.imaginary = num1.imaginary + num2.imaginary;
    return result;
}

int main() {
    Complex num1, num2, sum;

    printf("Enter the real and imaginary parts of the first complex number:\n");
    scanf("%lf %lf", &num1.real, &num1.imaginary);

    printf("Enter the real and imaginary parts of the second complex number:\n");
    scanf("%lf %lf", &num2.real, &num2.imaginary);

    sum = addComplex(num1, num2);

    printf("Sum: %.2lf + %.2lfi\n", sum.real, sum.imaginary);

    return 0;
    
}
