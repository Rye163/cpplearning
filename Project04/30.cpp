#include<iostream>
using namespace std;

//4.3 C++对象模型和this指针

//4.3.1 成员变量和成员函数分开存储

//在C++中，类内的成员变量和成员函数分开存储

//只有非静态成员变量才属于类的对象上

class Person{
	int m_A;//非静态成员变量 属于类的对象上的
	
	static int m_B;//静态成员变量 不属于类的对象上
	
	void func(){//非静态成员函数 不属于类的对象上
		
	}
	
	static void func2(){//静态成员函数 不属于类的对象上
		
	}
};

int Person::m_B = 100;

void test01(){
	Person p;
	//空对象占用内存空间为：size of p = 1
	//C++编译器会给每个空对象也分配一个字节的空间，是为了区分空对象占内存的位置
	//每个空对象也应该有一个独一无二的内存地址
	cout << "size of p = " << sizeof(p) << endl;
}

void test02(){
	Person p;
	//对象p占用内存空间为：size of p = 4
	cout << "size of p = " << sizeof(p) << endl;
}

int main(){
	
	//test01();
	test02();
	
	system("pause");
	return 0;
}
