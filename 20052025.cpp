#include<iostream>
using namespace std;

int* tabPomoc; //Zmienna dla wszystkich funkcji(globalna)

void scal(int tab[], int l, int m, int r)
{
	int indexL = l, indexR = m + 1;

	for (int i = l; i <= r; i++) // Skopiowanie fragmentu  do tablicy pomocniczej
		tabPomoc[i] = tab[i];

	for (int k = l; k <= r; k++) // Scalanie dwóch posortowanych fragmentów z powrotem do tablicy g³ównej
		if (indexL <= m) // Jeœli s¹ jeszcze elementy w lewej czêœci
			if (indexR <= r) // Jeœli s¹ jeszcze elementy w prawej czêœci
				if (tabPomoc[indexR] < tabPomoc[indexL])
					tab[k] = tabPomoc[indexR++]; // Mniejszy element z prawej
				else
					tab[k] = tabPomoc[indexL++]; // Mniejszy (albowny) element z lewej
			else
				tab[k] = tabPomoc[indexL++]; // Zosta³y tylko elementy po lewej
		else
			tab[k] = tabPomoc[indexR++]; // Zosta³ tyko elementy po prawej
}

void sortuj(int tab[], int l, int r)
{
	if (r <= l) return;

	int m = (r + l) / 2; // Wyznaczenie œrodka

	sortuj(tab, l, m);
	sortuj(tab, m + 1, r);

	scal(tab, l, m, r);
}

int main()
{
	int* tab;
	int n;

	cin >> n;
	tab = new int[n]; // Tablica dynamiczna
	tabPomoc = new int[n]; // Tablica dynamiczna pomocnicza


	for (int i = 0; i < n; i++)
		cin >> tab[i];

	sortuj(tab, 0, n - 1);

	for (int i = 0; i < n; i++)
		cout << tab[i] << " ";

	return 0;
}
