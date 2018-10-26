#include "library.h"

#include <stdio.h>
#include <stdlib.h>

// Calcul du PGCD
int gcd(int a, int b) {
    int t;

    if(b == 0) {
        return -1;
    }

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

// Comparaison de deux entiers
int compare(int a, int b) {
    int result = 0;
    if(a < b )
        result = -1;
    else if(a > b)
        result = 1;
    return result;
}

// Somme des n premiers entiers
int sumNPrimeInts(int n) {
    int sum = 0;
    for(; n > 0 ; n--) {
        sum += n;
    }
    return sum;
}

// Comparaison de deux flottants

// Simplification
Fraction simplificate(Fraction frac) {
    int numHigherDivider = frac.numerator;
    int denHigherDivider = frac.denominator;

    int sizeOfNumDividers = numHigherDivider;
    int sizeOfDemDividers = denHigherDivider;

    int *numDividers = calloc(sizeOfNumDividers, sizeof(int));
    int *denDividers = calloc(sizeOfDemDividers, sizeof(int));

    int n = 0;
    for(int i = numHigherDivider ; i > 0 ; i--) {
        if(frac.numerator%i == 0) {
            numDividers[n] = i;
            n++;
        }
    }

    n = 0;
    for(int i = denHigherDivider ; i > 0 ; i--) {
        if(frac.denominator%i == 0) {
            denDividers[n] = i;
            n++;
        }
    }

    for(int i = sizeOfNumDividers ; i >= 0 ; i--) {
        for(int j = sizeOfDemDividers ; i >= 0 ; i--) {
            int numeratorDivider = numDividers[i];
            int denominatorDivider = denDividers[j];
            if(numeratorDivider == denominatorDivider) {
                Fraction result = {frac.numerator/numeratorDivider, frac.denominator/denominatorDivider};
            }
        }
    }
}