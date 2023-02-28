#include <iostream>
#include "fractions.h"
Fraction::~Fraction(){};
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
    std::cout << numerator << "/" << denominator << "\n";
}
void Fraction::reduce()
{
    Fraction copy(numerator, denominator);
    numerator /= NWD(numerator, denominator);
    denominator /= NWD(copy.numerator, copy.denominator);
}
void Fraction::print_float()
{
    std::cout << (double)numerator / denominator << "\n";
}

Fraction Fraction ::operator=(Fraction right)
{
    numerator = right.numerator;
    denominator = right.denominator;
    return *this;
}
Fraction Fraction ::operator+=(Fraction right)
{
    int help1, help2;
    help1 = denominator;
    help2 = right.denominator;
    numerator *= help2;
    right.numerator *= help1;
    numerator += right.numerator;
    denominator *= right.denominator;
    reduce();
    return *this;
}
Fraction Fraction ::operator-=(Fraction right)
{
    int help1, help2;
    help1 = denominator;
    help2 = right.denominator;
    numerator *= help2;
    right.numerator *= help1;
    numerator -= right.numerator;
    denominator *= right.denominator;
    reduce();
    return *this;
}
Fraction Fraction ::operator/=(Fraction right)
{
    numerator *= right.denominator;
    denominator *= right.numerator;
    reduce();
    return *this;
}
Fraction Fraction ::operator*=(Fraction right)
{
    numerator *= right.numerator;
    denominator *= right.denominator;
    reduce();
    return *this;
}
Fraction Fraction::operator==(Fraction right)
{
    reduce();
    right.reduce();
    bool flag = 0;
    flag = (numerator == right.numerator) && (denominator == right.denominator);
    if (flag)
        return true;
    else
        return false;
};
Fraction Fraction ::operator--()
{
    numerator -= denominator;
    return *this;
};
Fraction Fraction ::operator--(int)
{
    Fraction help = *this;
    numerator -= denominator;
    return help;
};
Fraction Fraction ::operator++()
{
    numerator += denominator;
    return *this;
};
Fraction Fraction ::operator++(int)
{
    Fraction help = *this;
    numerator += denominator;
    return help;
};
