#pragma once
#ifndef MY_FRACTION_H
#define MY_FRACTION_H


typedef struct {
    int num; 
    int den; 
} Fraction;

Fraction simplify(Fraction f);
Fraction add_frac(Fraction f1, Fraction f2);
Fraction sub_frac(Fraction f1, Fraction f2);
Fraction mul_frac(Fraction f1, Fraction f2);
Fraction div_frac(Fraction f1, Fraction f2);
Fraction make_frac(char* str);
void print_frac(Fraction f);

#endif
