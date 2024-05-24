#include<iostream>
using namespace std;

// 4.6.6 继承中同名静态成员处理方式
// 问题：继承中同名的静态成员在子类对象上如何进行访问？
// 静态成员和非静态成员出现同名，处理方式一致
//- 访问子类同名成员   直接访问即可
//- 访问父类同名成员   需要加作用域

class Base{
public:
	static int m_A;
	static void func(){
		cout << "Base-static void func()函数调用" << endl;
	}
	
	static void func(int a){
		cout << "Base-static void func(int a)函数调用" << endl;
	}
};

// 静态成员类外初始化
int Base::m_A = 100;

class Son : public Base{
public:
	static int m_A;
	static void func(){
		cout << "Son-static func()函数调用" << endl;
	}
};
// 静态成员类外初始化
int Son::m_A = 200;

// 同名静态成员属性
void test01(){
	//1、通过对象访问
	cout << "通过对象访问： " << endl;
	Son s1;
	cout << "Son 下 m_A = " << s1.m_A << endl;
	cout << "Base 下 m_A = " << s1.Base::m_A << endl;
	
	//2、通过类名访问
	cout << "通过类名访问： " << endl;
	cout << "Son 下 m_A = " << Son::m_A << endl;
	cout << "Base 下 m_A = " << Son::Base::m_A << endl;//表示类名访问通过继承得到父类作用域下的成员静态变量
	cout << "Base 下 m_A = " << Base::m_A << endl;//表示类名访问直接访问父类的成员静态变量
}

// 同名静态成员函数
void test02(){
	//1、通过对象访问
	cout << "通过对象访问： " << endl;
	Son s2;
	s2.func();
	s2.Base::func();
	s2.Base:: func(100);
	
	//2、通过类名访问
	cout << "通过类名访问： " << endl;
	Son::func();
	Son::Base::func();
	Base::func();//表示类名访问直接访问父类的成员静态函数
	Son::Base::func(100);
}

// 总结：同名静态成员处理方式和非静态处理方式一样，只不过有两种访问的方式（通过对象 和 通过类名）


int main(){
	
	test01();
	test02();
	
	system("pause");
	return 0;
}
