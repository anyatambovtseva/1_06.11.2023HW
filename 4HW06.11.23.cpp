#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float cd=1, kol, i;
	setlocale(LC_ALL, "Russian");
	cout << "введите число элементов дроби kol = ";
	cin >> kol;
	for (i = 0; i < kol - 1; i++)
		cd = 1 / (1 + cd);
	cd = 1 + cd;
	cout << cd << endl;
	return 0;
}
