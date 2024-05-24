#include<iostream>
using namespace std;

//3.3 函数重载
//3.3.1 函数重载概述

//作用：函数名可以相同，提高复用性

//函数重载满足条件：
//1.同一个作用域下
//2.函数名称相同
//3.函数参数类型不同或者个数不同或者顺序不同

//注意:函数的返回值不可以作为函数重载的条件


void func(){
	cout << "func()的调用" <<endl;
}

void func(int a){
	cout << "func(int a)的调用" <<endl;
}

void func(double a){
	cout << "func(double a)的调用" <<endl;
}

void func(int a, double b){
	cout << "func(int a, double b)的调用" <<endl;
}

void func(double a, int b){
	cout << "func(double a, int b)的调用" <<endl;
}

//函数的返回值不可以作为函数重载的条件
//int func(double a, int b){
//	cout << "func(double a, int b)的调用" << endl;
//}

int main(){
	
	func();
	func(1);
	func(0.1);
	func(1, 3.14);
	func(3.14, 1);
	
	system("pause");
	return 0;
}
