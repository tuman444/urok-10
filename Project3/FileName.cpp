#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int i;
	cout << "������� 1 ��� ���������, 2 ��� �������, 3 ��� ��������� , 4 ��� �������� ������� �����, 5 ��� ���������� " << endl;
	cin >> i;
	if (i <= 0 or i > 5)
	{
		cout << "��� ����� �������" << endl;
	}
	
	if (i == 1)
	{
		int a1, b1, c1;
		cout << "������� 1 ����� " << endl;
		cin >> a1;
		cout << "������� 2 �����" << endl;
		cin >> b1;
		c1 = a1 - b1;
		cout << "����� = " << c1 << endl;
	}
	
	if (i == 2)
	{
		int a2, b2, c2;
		cout << "������� 1 �����" << endl;
		cin >> a2;
		cout << "������� 2 �����" << endl;
		cin >> b2;
		c2 = a2 / b2;
		cout << "����� = " << c2 << endl;
	}

	if (i == 3)
	{
		int a3, b3, c3;
		cout << "������� 1 �����" << endl;
		cin >> a3;
		cout << "������� 2 �����" << endl;
		cin >> b3;
		c3 = a3 * b3;
		cout << "����� = " << c3 << endl;
	}
	
	if (i == 4)
	{
		float a4, b4, c4;
		cout << "������� 1 �����" << endl;
		cin >> a4;
		cout << "������� 2 �����" << endl;
		cin >> b4;
		c4 = a4 + b4;
		cout << "����� ������� ���� ����� �����  \t " << c4 << endl;
	}

	if (i == 5)
	{
		string a5, b5, c5;
		cout << "������� 1-�� �����" << endl;
		cin >> a5;
		cout << "������� 2-�� ����� \t" << endl;
		cin >> b5;
		c5 = a5 + " � " + b5;
		cout << "��������� ��� ����� \t" << c5 << endl;
	}
}