#include<iostream>
#include "Point.h"
using namespace std;

Point::Point(float a, float b)
{
	x = a;
	y = b;
}

Point::Point(Point&p)
{
	x = p.x;
	y = p.y;
}

int Point::operator==(Point&p)
{
	if (x == p.x && y == p.y) {
		return 1;
	}
	else {
		return 0;
	}
}

int Point::operator!=(Point&p)
{
	if (x != p.x && y != p.y) {
		return 1;
	}
	else {
		return 0;
	}
}

int Point::operator>(Point&p)
{
	if (x > p.x ||(x==p.x&&y>p.y)) {
		return 1;
	}
	else {
		return 0;
	}
}

ostream& operator<<(ostream&temp, Point&p)
{
	temp << "(" << p.x << "," << p.y << ")" << endl;
	return temp;
}

istream& operator>>(istream&temp, Point&p)
{
	cout << "请输入坐标，空格间隔" << endl;
	temp >> p.x;
	temp>> p.y;
	return temp;
}
