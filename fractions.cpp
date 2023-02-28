#include <iostream>
#include "fractions.h"
Fraction::Fraction()
{
    numerator = 0;
    denominator = 1;
}
Fraction::Fraction(int _numerator)
{
    numerator = _numerator;
    denominator = 1;
};
Fraction::Fraction(int _numerator, int _denominator)
{
    numerator = _numerator;
    if (_denominator)
        denominator = _denominator;
    else
        denominator = 1;
};
int NWD(int x, int y)
{
    int help;

    while (y != 0)
    {
        help = y;
        y = x % y;
        x = help;
    }

    return x;
}
void Fraction::print_fraction()
{
    std::cout << numerator << "/" << denominator;
}
void Fraction::reduce()
{
    Fraction copy(numerator, denominator);
    numerator /= NWD(numerator, denominator);
    denominator /= NWD(copy.numerator, copy.denominator);
}
void Fraction::print_float() {
    
}
