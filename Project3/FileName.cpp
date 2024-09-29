#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int i;
	cout << "¬ведите 1 дл€ вычитани€, 2 дл€ делени€, 3 дл€ умножени€ , 4 дл€ сложени€ дробных чисел, 5 дл€ соединени€ " << endl;
	cin >> i;
	if (i <= 0 or i > 5)
	{
		cout << "Ќет такой команды" << endl;
	}
	
	if (i == 1)
	{
		int a1, b1, c1;
		cout << "¬велите 1 число " << endl;
		cin >> a1;
		cout << "¬ведите 2 число" << endl;
		cin >> b1;
		c1 = a1 - b1;
		cout << "ќтвет = " << c1 << endl;
	}
	
	if (i == 2)
	{
		int a2, b2, c2;
		cout << "¬ведите 1 число" << endl;
		cin >> a2;
		cout << "¬ведите 2 число" << endl;
		cin >> b2;
		c2 = a2 / b2;
		cout << "ќтвет = " << c2 << endl;
	}

	if (i == 3)
	{
		int a3, b3, c3;
		cout << "¬ведите 1 число" << endl;
		cin >> a3;
		cout << "¬ведите 2 число" << endl;
		cin >> b3;
		c3 = a3 * b3;
		cout << "ќтвет = " << c3 << endl;
	}
	
	if (i == 4)
	{
		float a4, b4, c4;
		cout << "¬ведите 1 число" << endl;
		cin >> a4;
		cout << "¬ведите 2 число" << endl;
		cin >> b4;
		c4 = a4 + b4;
		cout << "—умма дробных двух чисел равна  \t " << c4 << endl;
	}

	if (i == 5)
	{
		string a5, b5, c5;
		cout << "¬ведите 1-ое слово" << endl;
		cin >> a5;
		cout << "¬ведите 2-ое слово \t" << endl;
		cin >> b5;
		c5 = a5 + " и " + b5;
		cout << "—щедин€ем эти слова \t" << c5 << endl;
	}
}