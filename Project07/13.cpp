#include<iostream>
using namespace std;

// 1.3.8 类模板与友元

//学习目标：掌握类模板配合友元函数的类内和类外实现

// 全局函数类内实现 - 直接在类内声明友元即可

// 全局函数类外实现 - 需要提前让编译器知道全局函数的存在

// 问题3：在问题2的基础上需要提前声明Person类
template<class T1, class T2>
class Person;

//类外实现
//问题2：需要让编译器提前知道全局函数printPerson2()的存在
template<class T1, class T2>
void printPerson2(Person<T1, T2> p){
	cout << "\t类外实现————姓名：" << p.m_Name << "\t年龄：" << p.m_Age << endl;
}

template<class T1, class T2>
class Person{
	// 全局函数类内实现
	friend void printPerson(Person<T1, T2> p){
		cout << "\t姓名：" << p.m_Name << "\t年龄：" << p.m_Age << endl;
	}
	
	//全局函数类外实现
	friend void printPerson2<>(Person<T1, T2> p);//问题1：加空模板参数列表
	
public:
	
	Person(T1 name, T2 age){
		this->m_Name = name;
		this->m_Age = age;
	}
	
private:
	T1 m_Name;
	T2 m_Age;
	
};



void test01(){
	Person<string, int>p("Tom", 8);
	printPerson(p);
}

void test02(){
	Person<string, int>p("Jerry", 5);
	printPerson2(p);
}


int main(){
	
	test01();
	test02();
	
	system("pause");
	
	return 0;
}
