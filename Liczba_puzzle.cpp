#include <iostream>
using namespace std;
int main()
{
    int a;
    int b;
    cout << "Liczba do rozkladu: ";
    cin >> a;
    b = 2;
    while (a > 1) {
        while (a % b == 0) {
            cout << "Liczba pierwsza znaleziona: " << b << endl;
            a /= b;
       }
        b++;
    }
    return 0;
}