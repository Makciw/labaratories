#include <iostream>
#include <locale>
#include <math.h>
//comment
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    int a, b;
if (a > 0 && b > 0){
    cout << "Введите 2 стороны прямоугольника: " << endl;
    cin >> a >> b;
    cout << "Периметр равен: " << 2 * a + 2 * b << endl;
    cout << "Площадь равна: " << a * b << endl;
    cout << "Диагональ равна: " << sqrt(a * a + b * b) << endl;
}
else cout << "Стороны должны быть положительным числом";
return 0;
}﻿
