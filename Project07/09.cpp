#include<iostream>
using namespace std;

// 1.3.3 类模板中成员函数创建时机

// 类模板中成员函数和普通类中成员函数创建时机是有区别的：
// 1. 普通类中的成员函数一开始就可以创建
// 2. 类模板中的成员函数在调用时才创建

class Person1{
public:
	void ShowPerson1(){
		cout << "showPerson1" << endl;
	}
};

class Person2{
public:
	void ShowPerson2(){
		cout << "showPerson2" << endl;
	}
};

template<class T>
class myClass{
public:
	
	T obj;
	
	//类模板中的成员函数
	void func1(){
		obj.ShowPerson1();
	}
	void func2(){
		obj.ShowPerson2();
	}
};

void test01(){
	myClass<Person1>m;
	m.func1();
	//m.func2();//编译会出错，说明函数调用才会去创建成员函数
}

int main(){
	
	test01();
	
	system("pause");
	
	return 0;
}
