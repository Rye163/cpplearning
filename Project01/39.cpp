#include<iostream>
using namespace std;

//指针的基本概念

//指针的作用：可以通过指针间接访问内存

//内存编号是从0开始记录的，一般用十六进制数字表示
//可以利用指针变量保存地址

//7.2 指针变量的定义和使用
//指针变量定义语法：数据类型 * 变量名；

int main(){
	
	int a = 10;//定义整型变量a
	
    //1、指针的定义：数据类型 * 变量名 ;
	int * p;
	//让指针记录变量a的地址
	p = &a;
	cout << "数据a的地址为：" << &a << endl;
	cout << "指针变量p为：" << p <<endl;
	
	//2、指针的使用
	//可以通过解引用的方式来找到指针指向的内存
	//指针前加"*"代表解引用，找到指针指向的内存中的数据
	*p = 1000;
	cout << "*p = " << *p << endl;
	cout << "a = " << a << endl;
	
	//指针变量和普通变量的区别
	//普通变量存放的是数据,指针变量存放的是地址
	
	system("pause");
	return 0;
}
