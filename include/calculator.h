// .h files contain declarations (what functions are available).

// Header guards ensure that the contents of a header file are processed 
// only once per source-file compilation, even if that header is included 
// multiple times.
#ifndef CALCULATOR_H
#define CALCULATOR_H

// You are telling the compiler:
// The function is called add.
// It accepts two double values.
// It returns a double value.
double add(double a, double b);  // This is a declaration, not the actual implementation.

double subtract(double a, double b);  // This is a declaration, not the actual implementation.

double multiply(double a, double b);  // This is a declaration, not the actual implementation.

double divide(double a, double b);  // This is a declaration, not the actual implementation.

int modulus(int a, int b);  // This is a declaration, not the actual implementation.

#endif