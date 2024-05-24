#include<iostream>
using namespace std;

//2.1 引用的基本使用
//作用：给变量起别名
//语法：数据类型 &别名 = 原名

int main(){
	
	int a = 10;
	int &b = a;
	
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	
	b = 100;
	
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	
	//2.2 引用注意事项
	//引用必须初始化
	//引用在初始化后，不可以改变
	int num1 = 10;
	int num2 = 20;
	
	//int &num3;//错误，引用必须初始化
	int &num3 = num1;
	
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;
	cout << "num3 = " << num3 << endl;
	
	//int &num3 = num2;//错误，一旦初始化后，就不可以更改
	num3 = num2;// //这是赋值操作，不是更改引用
	
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;
	cout << "num3 = " << num3 << endl;
	
	system("pause");
	return 0;
}
