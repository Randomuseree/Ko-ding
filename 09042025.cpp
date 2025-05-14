// Przedzia³y.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

double f(double x)
{
    return x * (x * (x - 3) + 2) - 6;
}

double ps(double a, double b, double eps) {

    double srodek;

    if (f(a) == 0.0) {
        return a;
    }
    else if (f(b) == 0.0) {
        return b;
    }

    while (b - a > eps) {

        srodek = (a + b) / 2;

        if (f(srodek) == 0.0)
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

int main()
{
    double  a = -13, b = 181, eps = 0.00001;

   
    cout << "Miejsce zerowe: " << ps(a, b, eps) << endl;
    return 0;
}
