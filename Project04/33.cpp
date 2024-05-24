#include<iostream>
using namespace std;

//4.3.4 const修饰成员函数

//常函数：

//成员函数后加const后我们称为这个函数为**常函数**
//常函数内不可以修改成员属性
//成员属性声明时加关键字mutable后，在常函数中依然可以修改

//常对象：

//声明对象前加const称该对象为常对象
//常对象只能调用常函数

class Person{
public:
	//this指针的本质是 指针常量 指针指向不可修改
	//指向的只可以修改
	//Person * const this;
	void showPerson() const{
        //此const相当于常量指针常量：const Person * const this;
		//表示this指向的值也不能改变(修饰this指针)
		
        //this->m_A = 100;报错，常函数内不可以修改成员属性
		
        //this = NULL;报错，指针已经指向p，指向不能再更改
		
		m_B = 100;
	}
	
	void func(){
		m_A = 100;//普通成员函数可以修改
	}
	
	int m_A;
	mutable int m_B;//特殊变量，在常函数中也可以修改这个值,加mutable
};

void test01(){
	Person p;
	p.showPerson();//this指针指向p
}

//常对象
void test02(){
	const Person p1 = Person();//在对象前加const,注意拷贝构造
	
	//p.m_A = 100;报错，常对象不允许修改普通的成员变量
	p1.m_B = 100;//特殊变量，在常对象下也可以修改
	
	p1.showPerson();//常对象只能调用常函数
	//p1.func();//报错，常对象不能调用普通成员函数
	//原因：普通成员函数可以修改成员变量，与常对象冲突
}


int main(){
	
	//test01();
	test02();
	
	system("pause");
	return 0;
}
