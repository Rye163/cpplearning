#include<iostream>
using namespace std;

//6.4 值传递
//所谓值传递，就是函数调用时实参将数值传入给形参
//值传递时，如果形参发生改变，并不会影响实参

//定义函数，实现两个数字交换
//如果函数不需要返回值，声明时可以写void
void swap(int num1,int num2){
	cout << "交换前：" << endl;
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;
	
	int temp = num1;
	num1 = num2;
	num2 = temp;
	
	cout << "交换后：" << endl;
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;
	return;//void不需要返回值不用写"0"，也可不写return
}
int main(){
	int a = 10;
	int b = 20;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	swap(a,b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	//值传递时，如果形参发生改变，并不会影响实参
	
	system("pause");
	return 0;
}
