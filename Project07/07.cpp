#include<iostream>
using namespace std;

// 1.3.1 类模板语法

// 类模板作用：
// 建立一个通用类，类中的成员 数据类型可以不具体制定，用一个**虚拟的类型**来代表。

template<class NameType, class AgeType>
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
	Person<string, int> p1("张三", 18);//显示指定类型
	p1.showPerson();
}

int main(){
	
	test01();
	
	system("pause");
	
	return 0;
}
