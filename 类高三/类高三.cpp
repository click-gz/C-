#include<iostream>
#include"Date.h"

using namespace std;

int main() {
	int a, b, c;
	for (int i = 0;i < 3;i++) {
		if (i == 0) {
			cout << "请输入年份：";
			cin >> c;
		}
		else if (i == 1) {
			cout << "请输入月份：";
			cin >> b;
			if (b < 1 || b>12) {
				cout << "输入有误！请重新输入！" << endl;
				i = 0;
			}
		}
		else {
			cout << "请输入日子：";
			cin >> a;
			if (b == 1 || b == 3 || b == 5 || b == 7 || b == 8 || b == 10 || b == 12) {
				if (a < 0 || a>31) {
					cout << "输入有误！请重新输入！" << endl;
					i = 1;
				}
			}
			else if (b == 4 || b == 6 || b == 9 || b == 11) {
				if (a < 0 || a>30) {
					cout << "输入有误！请重新输入！" << endl;
					i = 1;
				}
			}
			else {
				if ((c % 4 == 0 && c % 100 != 0) || (c % 400 == 0)) {
					if (a < 0 || a>29) {
						cout << "输入有误！请重新输入！" << endl;
						i = 1;
					}
				}
				else {
					if (a < 0 || a>28) {
						cout << "输入有误！请重新输入！" << endl;
						i = 1;
					}
				}
			}
		}
		
	}
	Date time(a, b, c);
	time.show();
	time++;
	time.show();
	++time;
	time.show();
}