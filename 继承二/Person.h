#ifndef B_H_
#define B_H_

#include"Date.h"

class Person:public Date {
protected:
	char name[20];
	char gender;
	Date birthday;
public:
	static int count;
	Person();
	Person(string, char, Date);
	Person(Person&);
	void print();
	int GetCashFlow();

};


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