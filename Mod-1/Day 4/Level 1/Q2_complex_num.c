#include <stdio.h>

// Structure definition for a complex number
struct Complex {
    double real;
    double imaginary;
};

// Function to read a complex number
struct Complex readComplex() {
    struct Complex complex;
    printf("Enter the real part: ");
    scanf("%lf", &complex.real);
    printf("Enter the imaginary part: ");
    scanf("%lf", &complex.imaginary);
    return complex;
}

// Function to write a complex number
void writeComplex(struct Complex complex) {
    printf("Complex number: %.2f + %.2fi\n", complex.real, complex.imaginary);
}

// Function to add two complex numbers
struct Complex addComplex(struct Complex complex1, struct Complex complex2) {
    struct Complex result;
    result.real = complex1.real + complex2.real;
    result.imaginary = complex1.imaginary + complex2.imaginary;
    return result;
}

// Function to multiply two complex numbers
struct Complex multiplyComplex(struct Complex complex1, struct Complex complex2) {
    struct Complex result;
    result.real = complex1.real * complex2.real - complex1.imaginary * complex2.imaginary;
    result.imaginary = complex1.real * complex2.imaginary + complex1.imaginary * complex2.real;
    return result;
}

int main() {
    struct Complex complex1, complex2, sum, product;

    printf("Enter the first complex number:\n");
    complex1 = readComplex();

    printf("Enter the second complex number:\n");
    complex2 = readComplex();

    // Addition of two complex numbers
    sum = addComplex(complex1, complex2);
    printf("Sum of the complex numbers:\n");
    writeComplex(sum);

    // Multiplication of two complex numbers
    product = multiplyComplex(complex1, complex2);
    printf("Product of the complex numbers:\n");
    writeComplex(product);

    return 0;
}
