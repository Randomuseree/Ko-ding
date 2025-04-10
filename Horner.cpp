// Horner.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int horner(int wsp[], int st, int x)
{
	if (st == 0)
		return wsp[0];

	return x * horner(wsp, st - 1, x) + wsp[st];
}

int main()
{
	int *wsp;
	int st;
	int x;

	cout << "Podaj stopien.\n";
	cin >> st;

	wsp = new int[st + 1];

	for (int i = 0; i <= st; i++)
	{
		cout << "Podaj wspó³czynnik i " << st - i << ": ";
		cin >> wsp[i];
	}

	cout << "Podaj argument. \n";
	cin >> x;

	cout << endl << "Podany stopien: " << st << endl << "Podany argument: " << x << endl;

	cout << "W( " << x << " ) = " << horner(wsp, st, x) << endl;

	delete[] wsp;

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
