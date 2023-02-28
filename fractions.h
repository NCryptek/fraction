class Fraction
{
private:
    int numerator = 0;
    int denominator = 1;

public:
    void print_fraction(); // printing fraction with '/'
    void print_float(); // printing float (as numerator/denominator operation)
    void reduce();  // reduce fraction
    Fraction();                                 // default constructor
    Fraction(int _numerator);                   // second constructor, using only numerator
    Fraction(int _numerator, int _denominator); // thirth cosntructor, using both numerator and denumerator
    ~Fraction(){};                              // deconstructor
};
int NWD(int x, int y);

