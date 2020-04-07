#include<iostream>
#include<string>
#include<string.h>
#include "Student.h"
using namespace std;
Student::Student()
{
	stuID = 0;
	stuDuration = 0;
}
Student::Student(string n, char g, Date j, int I):Person(n,g,j)
{
	stuID = I;
	stuDuration = 0;
}
void Student::SetDuration(int S)
{
	stuDuration = S;
}

void Student::Print()
{
	Person::print();
	cout << "学号：" << stuID << "；就读时间：" << stuDuration <<"年"<< endl;
}

int Student::GetCashFlow()
{
	return stuDuration*tuition;
}
