#include<iostream>
using namespace std;
class Complex {
private:
	double real, imag;
public:
	Complex() { real = 0;imag = 0; }
	Complex(double r, double i) { real = r;imag = i; }
	Complex(Complex& j) { real = j.real;imag = j.imag; }
	Complex operator +(Complex& j) { Complex c(real + j.real, imag + j.imag); return c; }
	Complex operator -(Complex& j) { Complex c(real - j.real, imag - j.imag); return c; }
	void show() {
		cout << "(" << real << "," << imag << ")" << endl;
	}
};