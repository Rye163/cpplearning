#include<iostream>
using namespace std;
int main(){
	
	//加减乘除
	int num1 = 10;
	int num2 = 3;
	cout << num1 + num2 << endl;
	cout << num1 - num2 << endl;
	cout << num1 * num2 << endl;
	cout << num1 / num2 << endl;//整数相除为整数，小数部分去除
	
	int a2 = 10;
	int b2 = 20;
	cout << a2 / b2 << endl; 
	
	int a3 = 10;
	int b3 = 0;
	//cout << a3 / b3 << endl; //报错，除数不可以为0
	
	
	//两个小数可以相除
	double d1 = 0.5;
	double d2 = 0.25;
	cout << d1 / d2 << endl;
	
	system("pause");
	return 0;
}
