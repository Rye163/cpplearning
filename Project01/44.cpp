#include<iostream>
using namespace std;

//7.7 指针和函数
//作用：利用指针作函数参数，可以修改实参的值

//实现两数字交换
void swap1(int num1 ,int num2)
{
	int temp = num1;
	num1 = num2; 
	num2 = temp;
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;
}

void swap2(int * p1 , int * p2){
	int temp = *p1;
	*p1 = *p2; 
	*p2 = temp;
	cout << "*p1 = " << *p1 << endl;
	cout << "*p2 = " << *p2 << endl;
}

int main(){
	
	//1. 值传递
	int a = 10;
	int b = 20;
	swap1(a, b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;// 值传递不会改变实参
	
	//2. 地址传递
	int * q1 = &a;
	int * q2 = &b;
	swap2(q1, q2);//可改为swap2(&a, &b);
	cout << "*q1 = " << *q1 << endl;
	cout << "*q2 = " << *q2 << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;// 地址传递会改变实参
	
	system("pause");
	return 0;
}
