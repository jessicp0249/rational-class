#include "rational.h"

int main()
{
Rational a(1, 2);
Rational b(1, 4);

Rational c = a.plus(b);
cout << a.print() << "+" << b.print() << "=" << c.print() << endl ;

c = a.minus(b);
cout << a.print() << "-" << b.print() << "=" << c.print() << endl ;

c = a.mult_by(b);
cout << a.print() << "x" << b.print() << "=" << c.print() << endl ;

c = a.div_by(b);
cout << a.print() << "%" << b.print() << "=" << c.print() << endl ;



return 0;
}
