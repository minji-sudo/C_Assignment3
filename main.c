#include <stdio.h>
#include "my_fraction.h"
#include "my_math.h"

int main(int argc, char* argv[]) {
    if (argc == 3) {
        printf("--- Task 3 (Rectangle Calculation) ---\n");
        Fraction w = make_frac(argv[1]);
        Fraction h = make_frac(argv[2]);

        Fraction sum = add_frac(w, h);
        Fraction two = { 2, 1 };
        Fraction perimeter = mul_frac(sum, two);
        Fraction area = mul_frac(w, h);

        printf("Perimeter: ");
        print_frac(perimeter);
        printf(", Area: ");
        print_frac(area);
        printf("\n");

        return 0; 
    }

    
    printf("--- Task 1 (Fraction Test) ---\n");
    char f1_str[20], f2_str[20];
    char op;
    printf("Input (ex: 2/5 + 2/4): ");

    if (scanf_s("%s %c %s", f1_str, &op, f2_str) == 3) {
        Fraction f1 = make_frac(f1_str);
        Fraction f2 = make_frac(f2_str);
        Fraction result;

        if (op == '+') result = add_frac(f1, f2);
        else if (op == '-') result = sub_frac(f1, f2);
        else if (op == '*') result = mul_frac(f1, f2);
        else if (op == '/') result = div_frac(f1, f2);

        printf("Output: ");
        print_frac(result);
        printf("\n\n");
    }

    printf("--- Task 2 (GCD & LCM Test) ---\n");
    int a, b;
    printf("Input (ex: 18 24): ");

    if (scanf_s("%d %d", &a, &b) == 2) {
        printf("Output GCD: %d, LCM: %d\n", get_gcd(a, b), get_lcm(a, b));
    }

    return 0;
