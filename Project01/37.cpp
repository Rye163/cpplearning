#include<iostream>
using namespace std;

//6.5 函数的常见样式
//常见的函数样式有4种

//1. 无参无返
void test01(){
	//void——无返
	//()为空——无参
	//void a = 10; //无类型不可以创建变量,原因无法分配内存
	cout << "this is test01" << endl;
}

//2. 有参无返
void test02(int a){
	//void——无返
	//(int a)非空——有参
	cout << "this is test02，a = " << a << endl;
}

//3. 无参有返
int test03(){
	//int——有返
	//()为空——无参
	cout << "this is test03" << endl;
	return 1000;
}

//4. 有参有返
int test04(int a){
	//int——有返
	//(int a)非空——有参
	cout << "this is test02，a = " << a << endl;
	return a;
}

int main(){
	
	//无参无返函数调用
	test01();
	//有参无返函数调用
	test02(100);
	//无参有返函数调用
	int num1 = test03();
	cout << "num1 = " << num1 << endl;
	//有参有返函数调用
	int num2 = test04(500);
	cout << "num2 = " << num2 << endl;
	
	system("pause");
	return 0;
}