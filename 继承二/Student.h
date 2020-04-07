/*从Person类以public方式派生Student类，添加学号stuId，就读时间（年）stuDuration
每年学费tuition(固定为5000元)，自行设计成员函数，要求满足以下测试要求：*/
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
