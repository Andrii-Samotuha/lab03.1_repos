// Lab_03_1.cpp 
// Самотуга Андрій
// Лабораторна робота № 3.1 
// Розгалуження, задане формулою: функція однієї змінної. 
// Варіант 25 
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double x;
	double y;
	double A;
	double B;

	cout << "x= "; cin >> x;

	A = 8.1 + pow(x, 3);

	if (x < -3.5) {
		B = 1 - pow(x, -5);
	}
	
	if (x >= -3.5 && x < 1) {
		B = 1 / tan(abs(x + 1));
	}
	if (x >= 1) {
		B = atan(2 * x) - log10(x / 2.0);
	}
	y = A + B;
	cout << "1) y = " << y << endl;

	// 2 спосіб
	
	if (x < -3.5) {
		B = 1 - pow(x, -5);
	}
	else {
		if (x >= -3.5 && x < 1) {
			B = 1 / tan(abs(x + 1));
		}
		else {
			B = atan(2 * x) - log10(x / 2.0);
		}
	}
	y = A + B;

	cout << "2) y = " << y << endl;
	 


	return 0;
   
}

