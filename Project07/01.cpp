#include<iostream>
using namespace std;

// 1.2.1 函数模板语法

// 函数模板作用：
// 建立一个通用函数，其函数返回值类型和形参类型可以不具体制定，用一个**虚拟的类型**来代表。

// 语法： template<typename T> 函数声明或定义

// 解释：
// template  ---  声明创建模板关键字
// typename  ---  关键字表明其后面的符号是一种数据类型，可以用class代替
// T         ---  通用的数据类型，名称可以替换，通常为大写字母

//两个整形交换
void swapInt(int &a, int &b){
	swap(a, b);
}

//交换两个浮点型
void swapDouble(double &a, double &b){
	swap(a, b);
}

// 函数模板——类型参数化，提高复用性
template<typename T> //声明一个模板，告诉编译器后面代码中紧跟着T不要报错
void mySwap(T &a, T &b){
	swap(a, b);
}

void test02(){
	int a = 10;
	int b = 20;
	
	//利用函数模板，两种方法
	//1. 自动类型推导
	mySwap(a, b);
	cout << "\ta = " << a << "\tb = " << b << endl;
	
	double c = 1.1;
	double d = 2.2;
	//2. 显示指定类型——<>内指定
	mySwap<double>(c, d);
	cout << "\tc = " << c << "\td = " << d << endl;
}

//void test01(){
//	int a = 10;
//	int b = 20;
//	
//	swapInt(a, b);
//	cout << "\ta = " << a << "\tb = " << b << endl;
//	
//	double c = 1.1;
//	double d = 2.2;
//	swapDouble(c, d);
//	cout << "\tc = " << c << "\td = " << d << endl;
//}

int main(){
	
	test02();
	
	system("pause");
	
	return 0;
}
