#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int a[10] = { 1,2,3,4,5,6,7,8,9,10 }, i, kol, first,j;
    for (i = 0; i < 10; i++)
        cout << a[i] << " ";
    cout << endl;
    cout << "введите число, на которое надо сдвинуть массив влево = ";
    cin >> kol;
    for (j = 0; j < kol; j++)
    {
        first = a[0];
        for (i = 0; i < 9; i++)
        {
            a[i] = a[i + 1];
        }
        a[9] = first;
    }
    for (i = 0; i < 10; i++)
        cout << a[i] << " ";
    return 0;
}
