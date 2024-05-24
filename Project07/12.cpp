#include<iostream>
using namespace std;

// 1.3.6 类模板成员函数类外实现

// 学习目标：能够掌握类模板中的成员函数类外实现

template<class T1, class T2>
class Person{
public:
	
	Person(T1 name, T2 age);
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
	
	void showPerson();
//	{
//		cout << "\tm_Name = " << this->m_Name << "\tm_Age = " << this->m_Age << endl;
//	}
	
	T1 m_Name;
	T2 m_Age;
};

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

void test01(){
	Person<string, int>p("张三", 18);
	p.showPerson();
}

int main(){
	
	test01();
	
	system("pause");
	
	return 0;
}
