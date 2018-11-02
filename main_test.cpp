#include<iostream>
#include<string>

using namespace std;

class Rational
{
    public:
        Rational();     // Default constructor
        Rational(int top, int bottom);   // Constructor with parameters

        int get_top();     // Get the numerator
        int get_bottom();      // Get the denominator

        void set_top(int top);     // Set the numerator
        void set_bottom(int bottom);      //Set the denominator
        Rational plus(Rational r);      // Add two rationals
        Rational minus(Rational r);     // Subtract one rational from another
        Rational mult_by(Rational r);   // Multiply two rationals
        Rational div_by(Rational r);    // Divide one rational by another
        
        void read();     // Read a Rational in from User input
        string print();     // Print Rational

    private:
        int m_top, m_bottom;    // Numerator and denominator
};

Rational :: Rational()
{
    m_top = 0;
    m_bottom = 1;
}

Rational :: Rational(int top, int bottom)
{
    m_top = top;
    m_bottom = bottom;
}

int Rational :: get_top()
{
    return m_top;
}

int Rational :: get_bottom()
{
    return m_bottom;
}

void Rational :: set_top(int top)
{
    m_top = top;
}

void Rational :: set_bottom(int bottom)
{
    m_bottom = bottom;
}

Rational Rational::plus(Rational r)
{
    int common_denom = get_bottom() * r.get_bottom();
    int first_term = get_top() * r.get_bottom();
    int second_term = r.get_top() * get_bottom();
    int new_top = first_term + second_term;

    Rational sum(new_top, common_denom);
    return (sum);
}

Rational Rational::mult_by(Rational r)
{
    int new_top = get_top() * r.get_top();
    int new_bottom = get_bottom() * r.get_bottom();
    Rational product(new_top, new_bottom);
    return (product);
}

Rational Rational::div_by(Rational r)
{
    int new_top = get_top() * r.get_bottom();
    int new_bottom = get_bottom() * r.get_top();
    Rational quotient(new_top, new_bottom);
    return (quotient);
}

Rational Rational:: minus(Rational r)
{
    Rational inverse(-1, 1);
    Rational additive_inverse = r.mult_by(inverse);
    Rational difference = plus(additive_inverse);
    
    return (difference);
}

void Rational::read()
{

    cout << endl << "enter the numerator: ";
    cin >> m_top;
    cout << "enter the denominator: " ;
    cin >> m_bottom;

    Rational(m_top, m_bottom);
}

string Rational::print()
{
    string output = to_string(get_top()) +  "/" + to_string(get_bottom());
    return (output);
}

int main()
{
    Rational a,b;
    a.read();
    b.read();

    Rational c = a.plus(b);
    cout << "The sum is: " << c.print() << endl ;

    c = a.mult_by(b);
    cout << "The product is: " << c.print() << endl ;

    c = a.div_by(b);
    cout << "The quotient is: " << c.print() << endl ;
    
    c = a.minus(b);
    cout << "The difference is: " << c.print() << endl ;
    
    return 0;
}
