#include<iostream>
using namespace std;

//6.2 函数的定义
//函数的定义一般主要有5个步骤：
//1、返回值类型 
//2、函数名
//3、参数列表
//4、函数体语句 
//5、return 表达式
int add(int num1,int num2){//函数定义时小括号内为形参
int sum = num1 + num2;
return sum;
}

int main(){
	int a = 10;
	int b = 10;
	int c = add(a,b);//调用时小括号内为实参,实参值传递给形参值
	cout << "sum = "<< c << endl;
	
	system("pause");//按任意键继续
	return 0;
}


