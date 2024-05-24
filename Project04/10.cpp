#include<iostream>
using namespace std;

//3.1 函数默认参数
//在C++中，函数的形参列表中的形参是可以有默认值的。
//语法：返回值类型  函数名 （参数= 默认值）{}

//如果是我们自己传入数据，就用自己的数据，如果没有，就用默认值

int func(int a, int b = 20, int c = 30){
	return a + b + c;
}

//注意事项
//1. 如果某个位置参数有默认值，那么从这个位置往后，从左向右，必须都要有默认值

//int func2(int a, int b = 10, int c){
//	return a + b + c;
//}

//2. 如果函数声明有默认值，函数实现的时候就不能有默认参数
//声明和实现只能有一个有默认参数
int func3(int a = 10, int b = 20);//声明无实现

//int func3(int a = 10, int b = 20){//有实现时不能有默认参数
//	return a + b;
//}

int main(){
	
	cout << func(10, 30) << endl;
	
	//cout << func3(10, 20) << endl;
	
	system("pause");
	return 0;
}
