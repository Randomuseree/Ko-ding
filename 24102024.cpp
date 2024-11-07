// 24102024 iteracyjne
//

#include <iostream>
using namespace std;

int main()
{
    int wynik = 1;
    int a;
    int n;

	cout << "Podaj baze: ";
	cin >> a;
	cout << "Podaj wyk³adnik: ";
	cin >> n;
	while (n > 0)
	{
		if (n % 2 == 1) {
			wynik *= a;
		}
		a *= a;
		n /= 2;
	}
	cout << "wynik: " << wynik;

	return 0;
}
