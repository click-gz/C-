#include<iostream>
#include"Point.h"
using namespace std;

int main() {
	float a, b;
	cout << "请输入坐标，用空格间隔：" << endl;
	cin >> a;
	cin >> b;
	Point p1(a, b);
	cout << "请输入坐标，用空格间隔：" << endl;
	cin >> a;
	cin >> b;
	Point p2(a, b);
	if (p1 == p2) {
		cout << "坐标相等"<<endl;
	}
	else if (p1 != p2) {
		cout << "坐标完全不同"<<endl;
	}
	else if (p1 > p2) {
		cout << "p1>p2"<<endl;
	}
	//cin >> p1;
	cout << p1 << endl;
	

}