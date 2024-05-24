#include<iostream>
using namespace std;

// 4.6.4 继承中的构造与析构顺序

class Base{
public:
	Base(){
		cout << "Base的构造函数" << endl;
	}
	~Base(){
		cout << "Base的析构函数" << endl;
	}
};

class Son : public Base{
public:
	Son(){
		cout << "Son的构造函数" << endl;
	}
	~Son(){
		cout << "Son的析构函数" << endl;
	}
};

void test01(){
	
	Base b;
	Son s;//先父后子构造，先子后父析构
}

int main(){
	
	test01();
	
	system("pause");
	return 0;
}
