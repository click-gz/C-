/*��Person����public��ʽ����Student�࣬���ѧ��stuId���Ͷ�ʱ�䣨�꣩stuDuration
ÿ��ѧ��tuition(�̶�Ϊ5000Ԫ)��������Ƴ�Ա������Ҫ���������²���Ҫ��*/
#pragma once
#include"Person.h"
class Student:public Person {
	int stuID,stuDuration,tuition=5000;
public:
	Student();
	Student(string,char,Date,int);
	void SetDuration(int);
	void Print();
	int GetCashFlow();
};
