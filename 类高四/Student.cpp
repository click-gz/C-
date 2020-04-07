#include<iostream>
#include<string.h>
#include "Student.h"
using namespace std;
Student::Student(int i, char n[16])
{
	id = i;
	strcpy_s(name,n);
}

Student::Student()
{
	id = 0;
	strcpy_s(name, "0");
}

Student Student::operator=(Student&s)
{
	id = s.id;
	strcpy_s(name, s.name);
	return *this;
}

void Student::show()
{
	cout << id << ":" << name << endl;
}
