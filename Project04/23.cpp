#include<iostream>
using namespace std;

//4.2.3 拷贝构造函数调用时机
//C++中拷贝构造函数调用时机通常有三种情况

class Person{
public:
	
	Person(){
		cout << "Person默认构造函数调用" << endl;
	}

	Person (int age){
		cout << "Person有参构造函数调用" << endl;
		m_Age = age;
	}
	
	Person (const Person& p){
		cout << "Person拷贝构造函数调用" << endl;
		m_Age = p.m_Age;
	}
	
	~Person(){
		cout << "Person析构函数调用" << endl;
	}
	
public:
	int m_Age;
};

void test01(){
    //1.使用一个已经创建完毕的对象来初始化一个新对象
	Person p1(20);
	Person p2(p1);
	
	cout << "p2的年龄是：" << p2.m_Age << endl;
}

//2.值传递的方式给函数参数传值
void doWork(Person p){//值传递会构造一个临时副本——拷贝
	//Person p = p;//隐式法
}

void test02(){
	Person p;
	doWork(p);
}

//3.以值方式返回局部对象
Person doWork2(){
	Person p1;
	cout << (int*)&p1 << endl;
	return Person(p1);//return p1;错误
	//注意：GCC编译器现在优化了返回值类型的局部变量时，
	//重新复制值类型的情况，所以这里拷贝构造函数不会调用
}

void test03(){
	Person p = doWork2();
	cout << (int*)&p << endl;
}


int main(){
	
	//test01();
	//test02();
	test03();
	
	
	system("pause");
	return 0;
}
