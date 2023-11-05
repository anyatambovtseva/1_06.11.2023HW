#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int i, N, k, sum=0;
	setlocale(LC_ALL, "Russian");
	cout << "введите число N = ";
	cin >> N;
	cout << "введите степень k = ";
	cin >> k;
	for (i = 1; i < N + 1; i++)
		sum = sum + pow(i, k);
	cout << sum;
	return 0;
}