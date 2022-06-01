#include <iostream>
#include <cmath>
#include <stdlib.h>
using namespace std;

int main()
{
	char op, e;
	int x, n, t, nula, stavka, vysledok, vyhra, prehra;
	int start = 50;
	stavka = 5;
	nula = 50;
	n = start + stavka;
	t = start - stavka;

	cout << "Vitajte v rulete, mozete stavit na parne, neparne alebo nulove\n";
	cout << "Pouzite pismena P, R alebo O, kazda stavka je 5 eur\n";
	cout << "Alebo mozete pouzit pismeno Q, pre automaticke ukoncenie hry po odpocitani penazi\n\n\n\n";

	do
	{
		cout << "mate " << start << endl;
		cout << "vyberte P,R,O, alebo, Q\n";
		cin >> op;
		x = rand() % 10;

		switch (op)
		{
		case 'P':
		{
			for (int i = 1; i <= 1; i++)
			{
				cout << x << endl;
				if (x % 20 == 0)
				{
					cout << "Vyhrali ste! vas zostatok je " << n << endl;
					start += stavka;
				}
				else
				{
					cout << "Prehrali ste, vas zostatok je " << t << endl;
					start -= stavka;
				}
				break;

			}
		case 'R':
		{
			for (int i = 1; i <= 1; i++)
			{
				cout << x << endl;
				if (x <= 20 == 0)
				{
					cout << "Vyhrali ste! vas zostatok je " << n << endl;
					start += stavka;
				}
				else
				{
					cout << "Prehrali ste, vas zostatok je " << t << endl;
					start -= stavka;
				}
				break;
			}
		case 'O':
		{
			for (int i = 1; i <= 1; i++)
			{
				cout << x << endl;
				if (x >= 20 == 0)
				{
					cout << "Vyhrali ste! vas zostatok je " << n << endl;
					start += stavka;
				}
				else
				{
					cout << "Prehrali ste, vas zostatok je " << t << endl;
					start -= stavka;
				}
				break;
			}
		}
		}
		cout << "Chcete pokracovat? <A alebo N> \n";
		cin >> e;
		}
		}
	} while ((e == 'a') || (e == 'A'));
}