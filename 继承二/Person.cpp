#ifndef D
#define D

#include<iostream>
#include<string>
#include<string.h>
#include "Person.h"
using namespace std;

int Person::count = 0;
Person::Person()
{
	gender = 'F';
	name[0] = 'a';
	count++;
}

Person::Person(string n, char g, Date j)
{
	strcpy_s(name, n.c_str());
	gender = g;
	birthday = j;
	count++;
}

Person::Person(Person&p)
{
	strcpy_s(name, p.name);
	gender = p.gender;
	birthday = p.birthday;
	count++;
}

void Person::print()
{
	cout << "����:" << name << "��"<<"�Ա�";
	if (gender == 'f') {
		cout << "Ů��";
	}
	else {
		cout << "�У�";
	}
	cout << "���գ�";
	birthday.Print();
}

int Person::GetCashFlow()
{
	return 0;
}
#endif // !D