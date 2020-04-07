#include<iostream>
#include<string.h>
#include"Student.h"

using namespace std;

int main() {
	int i;
	char name[16];
	cout << "请输入学生学号：";
	cin >> i;
	cout << "请输入学生姓名：";
	cin >> name;
	Student stu(i, name);
	Student s;
	//s.show();
	s = stu;
	s.show();
}