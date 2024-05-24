#include<iostream>
using namespace std;

//4.5.5 关系运算符重载

//语法：>,<,==,!=

//作用：**重载关系运算符，可以让两个自定义类型对象进行对比操作

class Person{
public:
	Person(string name, int age){
		m_Name = name;
		m_Age = age;
	}
	
	bool operator==(Person &p){
		if (this->m_Name == p.m_Name && this->m_Age == p.m_Age){
			return true;
		}
		return false;
	}
	
	bool operator!=(Person &p){// 注意条件
		if (this->m_Name == p.m_Name && this->m_Age == p.m_Age){
			return false;
		}
		return true;
	}
	
	string m_Name;
	int m_Age;
};

void test01(){
	Person p1("Tom", 18);
	Person p2("Jerry", 18);
	
	if (p1 == p2){
		cout << true << endl;
	}
	else{
		cout << false << endl;
	}
}

void test02(){
	Person p1("Tom", 18);
	Person p2("Jerry", 18);
	
	if (p1 != p2){
		cout << true << endl;
	}
	else{
		cout << false << endl;
	}
}

int main(){
	
	//test01();
	test02();
	
	system("pause");
	return 0;
}
