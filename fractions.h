class Fraction
{
private:
    int numerator;
    int denominator;

public:
    Fraction();                                 // default constructor
    Fraction(int _numerator);                   // second constructor, using only numerator
    Fraction(int _numerator, int _denominator); // thirth cosntructor, using both numerator and denumerator
    ~Fraction();                                // deconstructor
    Fraction operator=(Fraction right);         // = operator, only with fractions
    Fraction operator+=(Fraction right);        // += operator, only with fractions
    Fraction operator-=(Fraction right);        // -= operator, only with fractions
    Fraction operator/=(Fraction right);        // /= operator, only with fractions
    Fraction operator*=(Fraction right);        // *= operator, only with fractions
    Fraction operator==(Fraction right);        // == operator, only with fractions
    Fraction operator--();                      // work like -- for int
    Fraction operator--(int);                   // second -- operator
    Fraction operator++();                      // work like ++ for int
    Fraction operator++(int);                   // second ++ operator
    Fraction operator+(Fraction right);         // addition 2 fractions
    Fraction operator+(int right);              // addition fraction and int
    Fraction operator-(Fraction right);         // subtraction 2 fractions
    Fraction operator-(int right);              // subtraction fraction and int
    Fraction operator*(Fraction right);         // multiplication 2 fractions
    Fraction operator*(int right);              // multiplication fraction and int
    Fraction operator/(Fraction right);         // division 2 fractions
    Fraction operator/(int right);              // division fraction and int
    void print_fraction();                      // printing fraction with '/'
    void print_float();                         // printing float (as numerator/denominator operation)
    void reduce();                              // reduce fraction
};
int NWD(int x, int y);                          // calculating NWD
