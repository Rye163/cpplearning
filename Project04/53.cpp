#include<iostream>
using namespace std;

// 4.7.1 多态的基本概念

//多态是C++面向对象三大特性之一：封装、继承、多态

//多态分为两类
//静态多态: 函数重载 和 运算符重载属于静态多态，复用函数名
//动态多态: 派生类和虚函数实现运行时多态

//静态多态和动态多态区别：
//静态多态的函数地址早绑定  -  编译阶段确定函数地址
//动态多态的函数地址晚绑定  -  运行阶段确定函数地址


class Animal{
public:
	// 虚函数virtual改为动态多态
	virtual void speak(){
		cout << "动物在说话" << endl;
	}
};

class Cat: public Animal{
public:
	void speak(){
		cout << "小猫在说话" << endl;
	}
};

class Dog : public Animal{
public:
	void speak(){
		cout << "小狗在说话" << endl;
	}
};

//执行说话的函数
//地址早绑定 在编译阶段确定函数
//如果执行猫说话，这个地址不能提前绑定，需要在运行阶段进行绑定——地址晚绑定
void doSpeak(Animal & animal){
	animal.speak();//函数地址此时不能确定，要根据test01传入的对象确定
}

//多态满足条件： 
//1、有继承关系
//2、子类重写父类中的虚函数——重写表示函数返回值类型、函数名称、参数列表完全相同（此时virtual可写可不写）

//多态使用：
//父类指针或引用指向子类对象

void test01(){
	Cat cat;
	doSpeak(cat);// Animal & animal = cat;父类引用可以直接指向子类对象——多态使用
	
	Dog dog;
	doSpeak(dog);
}

void test02(){
	cout << "sizeof(Animal) = " << sizeof(Animal) << endl;//virtual指针8字节
}

int main(){
	
	test01();
	test02();
	
	system("pause");
	return 0;
}
