// 151220243.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

double CalculatePowerRecursive(int liczba_podstawa, int liczba_wykladnik)
{

	if (liczba_wykladnik == 0)
	{
		return 1;
	}
	else if (liczba_wykladnik < 0) {
		return 1.0 / CalculatePowerRecursive(liczba_podstawa, -liczba_wykladnik);
	}
	else if (liczba_wykladnik > 0)
	{
		return liczba_podstawa * CalculatePowerRecursive(liczba_podstawa, liczba_wykladnik - 1);
	}
}

void DisplayResult(double wynik) {
	cout << "Wynik: " << wynik;
}

int main()
{
	int liczba_podstawa;
	int liczba_wykladnik;
	cout << "Wiatj! Oto program obliczaj¹cy rekurencyjnie potege liczby." << endl;
	cout << "Podaj podstawe liczby i wykladnik liczby." << endl;
	cin >> liczba_podstawa;
	cin >> liczba_wykladnik;
	double wynik = CalculatePowerRecursive(liczba_podstawa, liczba_wykladnik);
	
	DisplayResult(wynik);
}
