#include<iostream>
using namespace std;

//4.3.3 空指针访问成员函数

//C++中空指针也是可以调用成员函数的，但是也要注意有没有用到this指针

//如果用到this指针，需要加以判断保证代码的健壮性

class Person{
	
public:
	
	void showClassName(){
		cout << "this is Person class" << endl;
	}
	
	void showPersonAge(){
		
		if(this == NULL){
			return;//防止传入空指针，加强健壮性
		}
		cout << "age = " << this->m_Age << endl;//错误，传入指针为空
	}
	
	int m_Age;
};

void test01(){
	
	Person *p = NULL;
	
	p->showClassName();//不出错，证明空指针可以访问成员函数
	
	p->showPersonAge();//出错，传入指针为空
}


int main(){
	
	test01();
	
	system("pause");
	return 0;
}
