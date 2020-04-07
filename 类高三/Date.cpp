#include<iostream>
#include "Date.h"
using namespace std;

Date::Date(int a, int b, int c)
{
	d = a;
	m = b;
	y = c;
}

Date::Date(Date&D)
{
	d = D.d;
	m = D.m;
	y = D.y;
}

void Date::show()
{
	cout << "ÈÕÆÚÊÇ£º" << y << "." << m << "." << d << endl;
}

Date Date::operator++()
{
	++d;
	if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) {
		if (d >= 32) {
			if (m != 12) {
				m++;
				d = 1;
			}
			else {
				y++;
				m = 1;
				d = 1;
			}
		}
	}
	else if(m==4||m==6||m==9||m==11){
		if (d >= 31) {
			m++;
			d = 1;
		}
	}
	else {
		if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) {
			if (d >= 30) {
				m++;
				d = 1;
			}
		}
		else {
			if (d >= 29) {
				m++;
				d = 1;
			}
		}
	}
	return *this;
}

Date Date::operator++(int)
{
	Date temp(d, m, y);
	d++;
	if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) {
		if (d >= 32) {
			if (m != 12) {
				m++;
				d = 1;
			}
			else {
				y++;
				m = 1;
				d = 1;
			}
		}
	}
	else if (m == 4 || m == 6 || m == 9 || m == 11) {
		if (d >= 31) {
			m++;
			d = 1;
		}
	}
	else {
		if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) {
			if (d >= 30) {
				m++;
				d = 1;
			}
		}
		else {
			if (d >= 29) {
				m++;
				d = 1;
			}
		}
	}
	return temp;
}

