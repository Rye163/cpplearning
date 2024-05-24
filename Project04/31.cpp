#include<iostream>
using namespace std;

//4.3.2 this指针概念

//通过4.3.1我们知道在C++中成员变量和成员函数是分开存储的
//每一个非静态成员函数只会诞生一份函数实例，也就是说多个同类型的对象会共用一块代码

//那么问题是：这一块代码是如何区分那个对象调用自己的呢？
//c++通过提供特殊的对象指针，this指针，解决上述问题。**this指针指向被调用的成员函数所属的对象**

//this指针是隐含每一个非静态成员函数内的一种指针

//this指针不需要定义，直接使用即可

//this指针的用途：
class Person{
public:
	Person(int age){
		//1. 当形参和成员变量同名时，可用this指针来区分
		this->age = age;//this指向被调用的成员函数 所属的对象（p1）
	}
	//函数吸收
	//不加&表示值，创建一个新的变量不是原来的p2（拷贝构造）
	Person& PersonAddAge(Person & p){
		this->age += p.age;
		//this指向p2的指针，*this指向p2的这个对象的本体
		return *this;
	}
	
	int age;
};

//void test01(){
//	Person p1(18);
//	cout << "p1的年龄为：" << p1.age << endl;
//	
//}

//2. 在类的非静态成员函数中返回对象本身，可使用return *this
void test02(){
	Person p1(10);
	Person p2(10);
	
	//链式编程思想
	p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);
	
	cout << "p2的年龄为：" << p2.age << endl;
}



int main(){
	
	//test01();
	test02();
	
	system("pause");
	return 0;
}
