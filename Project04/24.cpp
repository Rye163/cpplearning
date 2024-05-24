#include<iostream>
using namespace std;

//4.2.4 构造函数调用规则

//默认情况下，c++编译器至少给一个类添加3个函数
//1．默认构造函数(无参，函数体为空)
//2．默认析构函数(无参，函数体为空)
//3．默认拷贝构造函数，对属性进行 值拷贝

//构造函数调用规则如下：
//1.如果用户定义有参构造函数，c++不在提供默认无参构造，但是会提供默认拷贝构造
//2.如果用户定义拷贝构造函数，c++不会再提供其他构造函数

class Person{
public:
	
//	Person(){
//		cout << "Person默认构造函数调用" << endl;
//	}
	
//	Person (int age){
//		cout << "Person有参构造函数调用" << endl;
//		m_Age = age;
//	}
	
	Person (const Person & p){
		cout << "Person拷贝构造函数调用" << endl;
		m_Age = p.m_Age;
	}
	
	~Person(){
		cout << "Person析构函数调用" << endl;
	}
	
public:
	int m_Age;
};

//void test01(){
//	Person p;
//	p.m_Age = 18;
//    //编译器提供的拷贝构造函数最后不会打印"Person拷贝构造函数调用"
//	//但是会值拷贝
//	
//	Person p2(p);
//	cout << "p2的年龄为：" << p2.m_Age << endl;
//}

//void test02(){
//	Person p(18);
//	Person p2(p);
//	//编译器提供的拷贝构造函数最后不会打印"Person拷贝构造函数调用"
//	//但是会值拷贝
//	
//	cout << "p2的年龄为：" << p2.m_Age << endl;
//}

void test03(){
	//Person p;//错误，不提供默认构造函数
	//Person p1(18);//错误，不提供有参构造函数
	Person p2(p1);
	cout << "p2的年龄为：" << p2.m_Age << endl;
}

int main(){
	
	//test01();
	//test02();
	//test03();	
	system("pause");
	return 0;
}
