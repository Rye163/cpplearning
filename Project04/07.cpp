#include<iostream>
using namespace std;

//2.4 引用做函数返回值
//作用：引用是可以作为函数的返回值存在的

//1.不要返回局部变量引用
int& test01(){
	
	int a = 10;//局部变量，存放栈区
	return a;
}

//2.函数调用作为左值
int& test02(){
	static int a = 10;
	return a;
}

int main(){
	
	//int &ref01 = test01();
	
	//cout << "ref01 = " << ref01 << endl;
	
	int &ref02 = test02();
	
	cout << "ref02 = " << ref02 << endl;
	
	//函数调用作为左值
	test02() = 1000;//前提：如果函数的返回值是引用（变量），这个函数调用可以作为左值
	
	cout << "ref02 = " << ref02 << endl;
	
	system("pause");
	return 0;
}
