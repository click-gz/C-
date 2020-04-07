#include<iostream>
#include"Complex.h"
using namespace std;
int main() {
	Complex c(1, 2),c1(2,3),c2;
	c.show();
	c1.show();
	c2 = c1 + c;
	c2.show();
	c2 = c1 - c;
	c2.show();
	

}