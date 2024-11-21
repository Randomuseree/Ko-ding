#include <iostream>
using namespace std;
int main()
{
    int n;
    int k;
    cout << "podaj liczbe KURWA: ";
    cin >> n;
    k = 2;
    while (n > 1) {
        while (n % k == 0) {
            cout << k << endl;
            n = n / k;
       }
        k++;
    }
}