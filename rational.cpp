#include<iostream>
#include<string>
#include"rational.h"

using namespace std;

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
/*
Rational minus(Rational r)
{
    Rational inverse(-1, 1);
    Rational first_ratio(m_top, m_bottom);
    Rational difference = first_ratio.plus(r.mult_by(inverse));
    return (difference);
}
*/
Ratioinal Rational::read()
{
    int top;
    int bottom;

    cout << "enter the numerator: ";
    cin >> top;
    cout << "enter the denominator: ";
    cin >> bottom;

    return Rational(top, bottom);
}

string Rational::print()
{
    string output = to_string(get_top()) +  "/" + to_string(get_bottom());
    return (output);
}
