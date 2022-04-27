#ifndef Complex_H 
#define Complex_H
#include <iostream>
#include <string>
#include <math.h>
#define PI 3.14159
using namespace std;
class Complex
{
private:
	double x;
	double y;
public:
	double modul();
	double argument();
	void show_complex();
	void set_complex(double rl, double mn);
	double get_complex_rl();
	double get_complex_mn();

};
#endif