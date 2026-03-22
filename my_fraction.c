#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "my_fraction.h"
#include "my_math.h" 


Fraction simplify(Fraction f) {
    int g = get_gcd(f.num, f.den);
    f.num = f.num / g;
    f.den = f.den / g;
    return f;
}

Fraction add_frac(Fraction f1, Fraction f2) {
    Fraction result;
    result.num = (f1.num * f2.den) + (f2.num * f1.den);
    result.den = f1.den * f2.den;
    return simplify(result);
}

Fraction sub_frac(Fraction f1, Fraction f2) {
    Fraction result;
    result.num = (f1.num * f2.den) - (f2.num * f1.den);
    result.den = f1.den * f2.den;
    return simplify(result);
}


Fraction mul_frac(Fraction f1, Fraction f2) {
    Fraction result;
    result.num = f1.num * f2.num;
    result.den = f1.den * f2.den;
    return simplify(result);
}


Fraction div_frac(Fraction f1, Fraction f2) {
    if (f2.num == 0) {
        printf("\n[Error] 0으로 나눌 수 없습니다!\n");
        exit(1);
    }
    Fraction result;
    result.num = f1.num * f2.den;
    result.den = f1.den * f2.num;
    return simplify(result);
}

Fraction make_frac(char* str) {
    Fraction f;
    sscanf(str, "%d/%d", &f.num, &f.den);
    return simplify(f);
}


void print_frac(Fraction f) {
    printf("%d/%d", f.num, f.den);
}
