#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n, k, sum = 0, kol=0, N;
	setlocale(LC_ALL, "Russian");
	cout << "������� ����� ����� N = ";
	cin >> n;
	cout << "������� �������� �������� k = ";
	cin >> k;
	N = n;
	while (N > 0)
	{
		N = N / 10;
		kol++;
	}
	if (kol > k)
		cout << int(n / pow(10,kol-k));
	if (kol == k)
		cout << n;
	if (kol<k)
		cout << "���������� ������� �������� ���������� ��������";
	return 0;
}