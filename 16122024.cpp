// 16122024.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int liczba;
	int i = 0;
	int tablica[30];
	cin >> liczba;

	while (liczba != 0)
	{
		tablica[i] = liczba % 2;
		i++;
		liczba /= 2;
	}
	for (int j = i - 1; j >= 0; j--) {
		cout << tablica[j];
	}
	cout << endl << endl << "Koniec. Idz sobie." << endl;
}
