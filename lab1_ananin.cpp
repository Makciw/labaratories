#include <iostream>
#include <locale>
#include <math.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    int a, b;
    cout << "Введите стороны прямоугольника: " << endl;
    cin >> a >> b;
    cout << "Периметр равен: " << 2 * a + 2 * b << endl;
    cout << "Площадь равна: " << a * b << endl;
    cout << "Диагональ равна: " << sqrt(a * a + b * b) << endl;
}

