#ifndef C
#define C
#include<iostream>
using namespace std;
class Date
{
private:
	int year, month, day;
public:
inline	Date(int year = 1990, int month = 1, int day = 1);
inline	Date(const Date& r);
inline	Date operator =(Date d);
inline	void Print();
};
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
#endif
/*在上面的工程中添加Person类，
包括姓名name（字符数组，包括结束符最长20字符），性别gender（字符），
生日birthday（Date类对象），人数统计变量count（静态），
自行设计成员函数，保证满足以下测试要求(在main函数中调用Test1函数)：
void Test1()
{
	Person p1,p2("zhang",'f',Date(1991,1,1)),p3(p2);
	p3.Print();//输出: “姓名:zhang;性别: 女;生日:1991-1-1;
	cout<<”收支为：”<<p3.GetCashFlow()<<”元”<<endl; //输出：0元
	Person *p=new Person("li",'m',Date(1990,2,2));//创建堆对象（调用有参构造）
	p>Print();//输出堆对象基本信息
	delete p;//释放堆对象
	}
*/
