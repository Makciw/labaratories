#include <iostream>
#include <math.h>
#include <locale>
int main(){
setlocale(LC_ALL,"ru");
int length, width;
cout << "Введите стороны прямоугольника:  ";
cin >> a >> b;
cout << "Периметр равен:  " << 2 * a + 2 * b << endl;
cout << "Площадь равна: " << a * b << endl;
cout << "Диагональ равна: " << sqrt(a * a + b * b) << endl;
return 0;
}
