#include <iostream>
#include <math.h>
#include <locale.h>

using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	double side1, side2, side3, half_meter, s;

	cout << "������� 3 ������� ������������: ";
	cin >> side1 >> side2 >> side3;

	if ((side1 > 0 && side2 > 0 && side3 > 0) && (side1 + side3 > side2) && (side1 + side2 > side3) && (side2 + side3 > side1)) {

		half_meter = (side1 + side2 + side3) / 2;
		s = sqrt(half_meter * (half_meter - side1) * (half_meter - side2) * (half_meter - side3));

		cout << "��������: " << side1 + side2 + side3 << "\n";
		cout << "������� �� ������: " << s << "\n";
		if (int(side1 == side2) + int(side1 == side3) + int(side2 == side3) > 0) cout << "��������������" << "\n";
		else cout << "����������������" << "\n";
	}
	else cout << "����� ������� �� ����������� ������������" << "\n";
	return 1;
}