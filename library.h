#ifndef EXIAMATH_LIBRARY_H
#define EXIAMATH_LIBRARY_H

//Structure fraction
typedef struct Fraction Fraction;
struct Fraction {
    int numerator;
    int denominator;
};

void hello(void);
int gcd(int A, int b);
Fraction simplificate(Fraction frac);

#endif