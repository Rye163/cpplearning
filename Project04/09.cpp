#include<iostream>
using namespace std;

//2.6 常量引用
//作用：常量引用主要用来修饰形参，防止误操作
//在函数形参列表中，可以加const修饰形参，防止形参改变实参

//打印数据函数
void showValue(const int& val){
	//val = 1000;//错误，const防止形参改变实参，不能改变实参
	cout << "val = " << val <<endl;
}

int main(){
	
	int a = 10;
	
	//int& ref = 10;  引用本身需要一个合法的内存空间，因此这行错误
	//10在常量区，引用必须在堆区或栈区
	
	//加入const编译器优化代码，int temp = 10; const int& ref = temp;
	const int& ref = 10;//正确
	//ref = 20;//错误，加入const后变为只读状态，不可修改
	
	int b = 100;
	showValue(b);
	cout << "b = " << b <<endl;
	
	
	system("pause");
	return 0;
}
