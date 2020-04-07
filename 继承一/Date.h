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
/*������Ĺ��������Person�࣬
��������name���ַ����飬�����������20�ַ������Ա�gender���ַ�����
����birthday��Date����󣩣�����ͳ�Ʊ���count����̬����
������Ƴ�Ա��������֤�������²���Ҫ��(��main�����е���Test1����)��
void Test1()
{
	Person p1,p2("zhang",'f',Date(1991,1,1)),p3(p2);
	p3.Print();//���: ������:zhang;�Ա�: Ů;����:1991-1-1;
	cout<<����֧Ϊ����<<p3.GetCashFlow()<<��Ԫ��<<endl; //�����0Ԫ
	Person *p=new Person("li",'m',Date(1990,2,2));//�����Ѷ��󣨵����вι��죩
	p>Print();//����Ѷ��������Ϣ
	delete p;//�ͷŶѶ���
	}
*/
