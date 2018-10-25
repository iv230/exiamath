#include "library.h"

#include <stdio.h>

void hello(void) {
    printf("Hello, World!\n");
}

int gcd(int a, int b) {
    int t;
    do {
        if (a < b)
        {
            t = a;
            a = b;
            b = t;
        }
        a = a - b;
    } while (a);
    return b;
}

double add(double a, double b) {
    return a+b;
}

double sub(double a, double b) {
    return a-b;
}

double mult(double a, double b) {
    return a*b;
}

double div(double a, double b) {
    return a/b;
}