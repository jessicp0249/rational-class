
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
        
        Rational read();     // Read a Rational in from User input
        string print();     // Print Rational

    private:
        int m_top, m_bottom;    // Numerator and denominator
};
