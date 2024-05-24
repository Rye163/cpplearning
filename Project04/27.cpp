#include<iostream>
#include<string>
using namespace std;

//4.2.7 类对象作为类成员

//C++类中的成员可以是另一个类的对象，我们称该成员为 对象成员

//手机类
class Phone{
public:
	
	Phone(string pName){//手机品牌名初始化
		cout << "Phone构造函数调用" << endl;
		m_pName = pName;
	}
	
	~Phone(){
		cout << "Phone析构函数调用" << endl;
	}
	
public:
	string m_pName;//手机品牌
};

class Person{
	
public:
    //Phone m_Phone = pName;隐式转换法
	Person(string name, string pName):m_Name(name), m_Phone(pName){
		cout << "Person构造函数调用" << endl;
	}
	
	~Person(){
		cout << "Person析构函数调用" << endl;
	}
	
public:
	//姓名
	string m_Name;
	//手机
	Phone m_Phone;
};

//当其他类的对象作为本类的成员，构造时先构造其他类的对象，再构造自身
//析构顺序与构造相反

void test01(){
	Person p("张三","苹果");
	
	cout << p.m_Name << "拿着一个" << p.m_Phone.m_pName << endl;
}

int main(){
	
	test01();
	
	system("pause");
	return 0;
}
