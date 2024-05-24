#include<iostream>
using namespace std;

//3.3.2 函数重载注意事项

//1.引用作为重载条件
void func(int & a){ //int &a = 10;不合法不调用
	cout << "func(int & a)的调用" << endl;
}

void func(const int & a){//cons int &a = 10;合法
	cout << "func(const int & a)的调用" << endl;
}

//2.函数重载碰到函数默认参数
void func2(int a){
	cout << "func2(int a)的调用" << endl;
}

void func2(int a, int b = 10){
	cout << "func2(int a, int b = 10)的调用" << endl;
}

int main(){
	
	int a = 10;
	func(a);//走可读可写的函数
	func(10);//走可读不可写的函数
	
	//func2(10);//当函数重载碰到默认参数，出现二义性，报错，尽量避免这种情况
	func2(10,10);
	
	system("pause");
	return 0;
}
