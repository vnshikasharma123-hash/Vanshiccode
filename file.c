#include <stdio.h>

typedef struct {
    float real;
    float imag;
} Complex;

Complex input() {
    Complex c;
    printf("Enter real part: ");
    scanf("%f", &c.real);
    printf("Enter imaginary part: ");
    scanf("%f", &c.imag);
    return c;
}

void display(Complex c) {
    printf("Result = %.2f + %.2fi\n", c.real, c.imag);
}

Complex Add(Complex a, Complex b) {
    Complex result;
    result.real = a.real + b.real;
    result.imag = a.imag + b.imag;
    return result;
}

Complex Sub(Complex a, Complex b) {
    Complex result;
    result.real = a.real - b.real;
    result.imag = a.imag - b.imag;
    return result;
}

Complex Mul(Complex a, Complex b) {
    Complex result;
    result.real = (a.real * b.real) - (a.imag * b.imag);
    result.imag = (a.real * b.imag) + (a.imag * b.real);
    return result;
}

int main() {
    Complex num1, num2, num3;

    printf("Enter first complex number:\n");
    num1 = input();

    printf("Enter second complex number:\n");
    num2 = input();

    num3 = Add(num1, num2);
    display(num3);

    num3 = Sub(num1, num2);
    display(num3);

    num3 = Mul(num1, num2);
    display(num3);

    return 0;
}
