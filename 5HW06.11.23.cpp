#include <math.h>
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    double x;
    cout << "Введите x: ";
    cin >> x;
    double yi = x,
        yi1 = 0;
    while (true)
    {
        yi1 = 0.5 * (yi + 3 * x / (2 * yi * yi + x / yi));
        if (abs(yi1 - yi) < pow(10, -5))
            break;
        yi = yi1;
    }
    cout << yi << endl;
    return 0;
}
