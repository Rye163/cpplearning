#include<iostream>
using namespace std;

// 1.2.6 模板的局限性

// 局限性：模板的通用性并不是万能的
// 为这些**特定的类型**提供**具体化的模板**

class Person {
public:
	
	Person(string name, int age){
		m_Age = age;
		m_Name = name;
	}
	
	string m_Name;
	int m_Age;
};

// 对比两个数据是否相等
template<class T>
bool myCompare(T &a, T&b){
	if(a == b){
		return true;
	}
	else return false;
}

// 利用具体化Person的版本实现具体化优先调用
template<> bool myCompare(Person &a, Person&b){
	if(a.m_Name == b.m_Name && a.m_Age == b.m_Age){
		return true;
	}
	else return false;
}

void test01(){
	int a = 10;
	int b = 20;
	
	bool ret = myCompare(a, b);
	
	if (ret){
		cout << "a == b" << endl;
	}
	else {
		cout << "a != b" << endl;
	}
}

void test02(){
	Person p1("Tom", 10);
	Person p2("Tom", 10);
	
	bool ret = myCompare(p1, p2);
	
	if (ret){
		cout << "p1 == p2" << endl;
	}
	else {
		cout << "p1 != p2" << endl;
	}
}


int main(){
	
	test01();
	test02();
	
	system("pause");
	
	return 0;
}
