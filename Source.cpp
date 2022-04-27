#include"Header.h"
#include <iostream>
#include <string>
#include <math.h>
#define PI 3.14159
using namespace std;
	double Complex:: modul() {
		return pow(x * x + y * y, 0.5);
	}
	double Complex::argument() {
		return atan2(y, x) * 180 / PI;
	}
	void Complex:: show_complex()
	{


		if (y >= 0) {

			cout << x << "+" << y << "i" << endl;
		}
		else {

			cout << x << y << "i" << endl;
		}
	}
	void Complex::set_complex(double rl, double mn) {
		x = rl;
		y = mn;
	}
	double Complex::get_complex_rl() {
		return x;
	}
	double Complex::get_complex_mn() {
		return y;
	}

