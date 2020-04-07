#include<iostream>
using namespace std;

class Point {
	float x, y;
public:
	Point(float, float);
	Point(Point&);
	int operator ==(Point&);
	int operator !=(Point&);
	int operator >(Point&);
	friend ostream &operator <<(ostream&, Point&);
	friend istream& operator >>(istream&, Point&);
};
