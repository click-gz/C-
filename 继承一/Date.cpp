#include<iostream>
#include"Date.h"
using namespace std;

Date::Date(int year, int month, int day)
{
	this->year = year;
	this->month = month;
	this->day = day;
}
Date::Date(const Date& r)
{
	year = r.year;
	month = r.month;
	day = r.day;
}
Date Date::operator=(Date d)
{
	year = d.year;
	month = d.month;
	day = d.day;
	return *this;
}
void Date::Print()
{
	cout << year << '-' << month << '-' << day << endl;
}