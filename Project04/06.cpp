#include<iostream>
using namespace std;

//2.3 引用做函数参数
//作用：函数传参时，可以利用引用的技术让形参修饰实参
//优点：可以简化指针修改实参

//交换函数

//1.值传递
void mySwap01(int a, int b){
	
	int temp = a;
	a = b;
	b = temp;
	
	cout << "swap01_a = " << a << endl;
	cout << "swap01_b = " << b << endl;
}	

//2.地址传递
void mySwap02(int *a, int *b){
	
	int temp = *a;
	*a = *b;
	*b = temp;
	
	cout << "swap02_a = " << *a << endl;
	cout << "swap02_b = " << *b << endl;
	
}

void mySwap03(int &a, int &b){
	int temp = a;
	a = b;
	b = temp;
	
	cout << "swap03_a = " << a << endl;
	cout << "swap03_b = " << b << endl;
}


int main(){
	
	int a = 10;
	int b = 20;
	
	mySwap01(a, b);//值传递，形参不会修饰实参
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	
	mySwap02(&a, &b);//地址传递，形参会修饰实参
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	
	mySwap03(a, b);//引用传递，形参会修饰实参
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	
	system("pause");
	return 0;
}
