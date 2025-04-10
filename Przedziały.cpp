// Przedziały.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

double f(double x)
{
    return x * (x*(x-3)+2)-6;
}


int main()
{
    double srodek, a = -10, b = 10, episs = 0.00001;

    if(f(a) == 0.0) {
        return a;
    }
    else if(f(b) == 0.0){
        return b;
    }


    while (b - a > episs) {
        srodek = (a + b) / 2;
        if (f(srodek) == 0)
        {
            return srodek;
        }
        if (f(a) * f(srodek) < 0) {
            b = srodek;
        }
        else {
            a = srodek;
        }
    }
    return (a + b) / 2;
}
