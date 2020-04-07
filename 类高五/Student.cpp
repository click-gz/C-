#include<iostream>
#include<string.h>
#include "Student.h"
using namespace std;
Student::Student()
{
	id = 0;
	name = new char[20];
}

void Student::getstu(int i, char n[19])
{
	id = i;
	strcpy_s(name,strlen(n)+1, n);
}


Student::~Student()
{
	delete[]name;
}

void Student::show()
{
	cout << id << ":" << name << endl;
}
