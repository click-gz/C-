#ifndef A
#define A
#include<iostream>
#include<string>
#include"Person.h"
using namespace std;
int main() {
	//Date oh(1991, 1, 1);
	Person p1, p2("zhang", 'f',Date(1111,1,1)), p3(p2);
	p3.print();//输出: “姓名:zhang;性别: 女;生日:1991-1-1;
	cout << "收支为：" << p3.GetCashFlow() << "元" << endl; //输出：0元
	Person* p = new Person("li", 'm',Date(1111, 1, 1));//创建堆对象（调用有参构造）
	p -> print();//输出堆对象基本信息
	delete p;//释放堆对象
}
#endif