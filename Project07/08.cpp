#include<iostream>
using namespace std;

// 1.3.2 类模板与函数模板区别

// 类模板与函数模板区别主要有两点：
// 1. 类模板没有自动类型推导的使用方式
// 2. 类模板在模板参数列表中可以有默认参数

template<class NameType, class AgeType = int>//模板参数列表中有默认参数
class Person{
public:
	
	Person(NameType name, AgeType age){
		this->m_Name = name;
		this->m_Age = age;
	}
	
	void showPerson(){
		cout << "name：" << this->m_Name << endl;
		cout << "age：" << this->m_Age << endl;
	}
	
	NameType m_Name;
	AgeType m_Age;
};

void test01(){
	Person p1("张三", 18);// 与教材不同，c++17新标准目前已支持自动类型推导
	p1.showPerson();
}

void test02(){
	Person<string> p2("李四", 28);// 模板参数列表中声明参数类型后，显示指定类型只用写未确认的参数类型就好
	p2.showPerson();
}

int main(){
	
	test01();
	test02();
	
	system("pause");
	
	return 0;
}
