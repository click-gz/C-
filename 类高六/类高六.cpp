﻿#include<iostream>
#include<string.h>
using namespace std;
class counter {
private:
	unsigned value;
public:
	counter() { value = 0; }
	counter(unsigned int a) { value = a; }
	counter& operator++();
	counter& operator++(int);
	void display();
};
counter& counter::operator++() {
	value++;
	return    *this;
}
counter& counter::operator++(int) {
	counter c(value);
	value++;
	return    c;
}
void counter::display() {
	cout << "Total is " << value << endl;
}
int main() {
	counter i(0), n(10);
	i = ++n;
	i.display();
	n.display();
	i = n++;//添加后置++重置
	i.display();
	n.display();
	return 0;
}
