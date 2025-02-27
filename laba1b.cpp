#include <iostream>
#include <math.h>

using namespace std;

int main() {
	double side1, side2, side3, half_meter, s;

	cout << "Enter the sides of the triangle separated by a space: ";
	cin >> side1 >> side2 >> side3;

	if ((side1 > 0 && side2 > 0 && side3 > 0) && (side1 + side3 > side2) && (side1 + side2 > side3) && (side2 + side3 > side1)) {
		
		half_meter = (side1 + side2 + side3) / 2;
		s = sqrt(half_meter * (half_meter - side1) * (half_meter - side2) * (half_meter - side3));

		cout << "Perimeter: " << side1 + side2 + side3 << "\n";
		cout << "Heron aren: " << s << "\n";
		if (int(side1 == side2) + int(side1 == side3) + int(side2 == side3) > 0) cout << "Isosceles" << "\n";
		else cout << "not isosceles" << "\n";
	}
	return 1;
}