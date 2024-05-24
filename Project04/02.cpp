#include<iostream>
using namespace std;

//栈区的数据由编译器管理开辟与释放，存放函数的参数值,局部变量等
//栈区数据注意事项——不要返回局部变量的地址

int* func(int b){//形参也会放在栈区
	
	b = 100;
	
	int a = 10;//局部变量——存放在栈区，栈区的数据在函数执行完
	return &a;//返回局部变量的地址
}

int main(){
	
	//接受函数的返回值
	int *p = func(1);
	
	cout << *p << endl;//第一次可以打印正确的数字是因为编译器做了保留
	//cout << *p << endl;//第二次这个数据就不会再保留了
	
	system("pause");
	return 0;

}
