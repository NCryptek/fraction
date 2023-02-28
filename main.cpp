#include <iostream>
#include "fractions.h"
using namespace std;
int main()
{
    Fraction test, test1(4,5), test2(5,4);
    test = test1+test2;
    test1.print_fraction();
}