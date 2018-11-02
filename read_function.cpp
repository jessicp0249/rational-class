#include<iostream>
#include<string>
#include "rational.h"

using namespace std;

string Rational::read()
{
    int i = 0;
    int top = 0;
    int bottom = 0;
    string input;

    getline(cin, input);

    while(i < input.length() && input.at(i) != "/")
    {
        if(input.at(i) = [0-9])
        {
            top = top * 10 + static_cast<int>(input.at(i));
            i++;
        }
        else if(input.at(i) = " ")  i++;
    }

    while(i < input.length())
    {
        if(input.at(i) = [0-9])
        {
            bottom = bottom * 10 + static_cast<int>(input.at(i));
            i++;
        }
        else if(input.at(i) = " ")  i++;
    }
    
    return Rational(top, bottom);

}
