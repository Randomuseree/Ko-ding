// 24102024 iteracyjne
//

#include <iostream>
using namespace std;

int main()
{
    int wynik = 1; //Deklaracja zmiennych
    int a; //Baza potegi
    int n; //Wykladnik potegi

	cout << "Podaj baze: ";
	cin >> a;
	cout << "Podaj wykladnik: ";
	cin >> n;
	while (n > 0) //Petla dziala dopoki wykladnik n jest wiekszy od zera
	{
		if (n % 2 == 1) { //Dla liczby nieparzystej n, potegowanie mozemy uproscic: a^n =a⋅a^n−1; gdzie a^{n-1} jest liczba parzysta, ktora mozna dalej przeksztalcic zgodnie z zasada powyzej.
			wynik *= a; 
		}
		a *= a; //a = a * a | Dla liczby parzystej n, potege mozna przekształcic w: a^n =(a^n/2 )^2
		n /= 2; // n = n / 2 //zmniejszanie wykladnika poprzez dzielenie przez dwa
	}
	cout << "wynik: " << wynik; //wypisuje wynik //wypisanie wyniku

	return 0;
}
