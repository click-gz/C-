#include<iostream>
#include<string.h>

#include"Student.h"

using namespace std;

int main() {
	Student stu[2];
	int i;
	char na[19];
	for (int j = 0;j < 2;j++) {
		cout << "请输入学生学号：";
		cin >> i;
		cout << "请输入学生姓名：";
		cin >> na;
		stu[j].getstu(i, na);
	}
	for (int j = 0;j < 2;j++) {
		stu[j].show();
	}
}