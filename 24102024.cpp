// 24102024 iteracyjne
//

#include <iostream>
using namespace std;

int main()
{
    int wynik = 1; //Deklaracja zmiennych
    int a;
    int n;

	cout << "Podaj baze: ";
	cin >> a;
	cout << "Podaj wyk³adnik: ";
	cin >> n;
	while (n > 0)
	{
		if (n % 2 == 1) { //Dla liczby nieparzystej n, potęgowanie możemy uprościć w następujący sposób: a^n =a⋅a^n−1; gdzie a^{n-1} jest liczbą parzystą, którą można dalej przekształcić zgodnie z zasadą powyżej.
			wynik *= a; 
		}
		a *= a; //Dla liczby parzystej n, potęgę można przekształcić w: a^n =(a^n/2 )^2
		n /= 2;
	}
	cout << "wynik: " << wynik; //wypisuje wynik

	return 0;
}
