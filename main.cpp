#include "rational.h"

int main()
{
Rational a(1, 2);
Rational b(1, 4);

Rational c = a.plus(b);
cout << c.print() << endl ;

return 0;
}
