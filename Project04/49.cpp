#include<iostream>
using namespace std;

// 4.6.5 继承中同名成员处理
class Base{
public:
	Base(){
		m_A = 10;
	}
	
	void func(){
		cout << "Base-func()函数调用" << endl;
	}
	//重载
	void func(int a){
		cout << "Base-func(int a)函数调用" << endl;
	}
	
	int m_A;
};

class Son : public Base{
public:
	Son(){
		m_A = 20;
	}
	
	void func(){
		cout << "Son-func()函数调用" << endl;
	}
	
	int m_A;
};

//同名成员属性处理
void test01(){
	Son s1;
	cout << "Son 下 m_A = " << s1.m_A << endl;//访问子类同名成员   直接访问即可
	cout << "Base 下 m_A = " << s1.Base::m_A << endl;//访问父类同名成员   需要加作用域
}

//同名成员函数处理
void test02(){
	Son s2;
	s2.func();//访问子类同名成员函数   直接访问即可
	s2.Base::func();//访问父类同名成员   需要加作用域
	
	//当子类与父类拥有同名的成员函数，子类会隐藏父类中所有同名成员函数(包括重载)
	//s2.func(20);
	//加作用域可以访问到父类中所有被隐藏的同名函数(包括重载)
	s2.Base::func(20);
}

int main(){
	
	test01();
	test02();
	
	system("pause");
	return 0;
}
