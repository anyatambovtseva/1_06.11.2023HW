#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int x, i, k=2;
	cout << "������� ����� x = ";
	cin >> x;
	for (i = 2; i < x/2; i++)
	{
		if (x % i == 0)
			k++;
	}
	if (x == 1)
		cout << "������� �� �������, �� ���������";
	if (k == 2 && x!=1)
		cout << "����� �������";
	if (k!=2)
		cout << "����� ���������";
	return 0;
}