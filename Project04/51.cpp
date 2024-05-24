#include<iostream>
using namespace std;

// 4.6.7 多继承语法
//C++允许一个类继承多个类  

//语法：class 子类 ：继承方式 父类1 ， 继承方式 父类2...

//多继承可能会引发父类中有同名成员出现，需要加作用域区分
//C++实际开发中不建议用多继承**

class Base1{
public:
	Base1(){
		m_A = 100;
	}
	int m_A;
};

class Base2{
public:
	Base2(){
		m_A = 200;
	}
	int m_A;
};

//语法：class 子类：继承方式 父类1 ，继承方式 父类2
class Son : public Base1, public Base2{
public:
	Son(){
		m_C = 300;
		m_D = 400;
	}
	int m_C;
	int m_D;
};

void test01(){
	Son s;
	cout << "sizeof(Son) = " << sizeof(s) << endl;//sizeof(s) = 16
	//多继承容易产生成员同名的情况
	//通过使用类名作用域可以区分调用哪一个基类的成员
	cout << "Base1 下 m_A = " << s.Base1::m_A <<endl;
	cout << "Base2 下 m_A = " << s.Base2::m_A <<endl;
}

int main(){
	
	test01();
	
	system("pause");
	return 0;
}
