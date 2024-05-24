#include<iostream>
using namespace std;

//7.5 const修饰指针

//const修饰指针有三种情况
//1. const修饰指针   --- 常量指针
//2. const修饰常量   --- 指针常量
//3. const即修饰指针，又修饰常量

int main(){
	
	int a = 10;
	int b = 20;
	//1. 常量指针——修饰指针：指针指向可以修改，指针指向的值不可以修改
	const int * p1 = &a;
	// *p1 = 20;——错误
	p1 = &b;
	cout <<"p1指向的内存为：" << *p1 << endl;
	cout <<"a = " << a << endl;
	
	int a1 = 10;
	int b1 = 20;
	//2. 指针常量——修饰常量：指针指向不可以改，指针指向的值可以更改
	int * const p2 = &a1;
	// p2 = &b1;——错误
	*p2 = 20;
	cout <<"p2指向的内存为：" << *p2 << endl;
	cout <<"a1 = " << a1 << endl;
	
	int a2 = 10;
	int b2 = 20;
	//3. const即修饰指针，又修饰常量——指针指向和指向的值都不可以改
	const int * const p3 = &a2;
	// *p3 = 20;——错误
	// p3 = &b2;——错误
	cout <<"p3指向的内存为：" << *p3 << endl;
	cout <<"a2 = " << a2 << endl;
	
	system("pause");
	return 0;
}
