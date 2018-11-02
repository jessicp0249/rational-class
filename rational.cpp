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

string Rational::print()
{
    string output = to_string(get_top()) +  "/" + to_string(get_bottom());
    return (output);
}
