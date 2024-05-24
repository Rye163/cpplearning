#include "person.h"

// 构造函数类外实现
template<class T1, class T2>// 告诉编译器T1与T2是什么
Person<T1, T2>::Person(T1 name, T2 age)//<>表示是**类模板**的类外实现
{
	this->m_Name = name;
	this->m_Age = age;
}

// 成员函数的类外实现
template<class T1, class T2>
void Person<T1, T2>::showPerson()
{
	cout << "\tm_Name = " << this->m_Name << "\tm_Age = " << this->m_Age << endl;
}
