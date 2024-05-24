#include<iostream>
using namespace std;

// 1.2.5 普通函数与函数模板的调用规则

// 调用规则如下：
// 1. 如果函数模板和普通函数都可以实现，优先调用普通函数
// 2. 可以通过空模板参数列表来强制调用函数模板
// 3. 函数模板也可以发生重载
// 4. 如果函数模板可以产生更好的匹配,优先调用函数模板

// 普通函数
void myPrint(int a, int b){
	cout << "普通函数调用" << endl;
}

template<typename T>
void myPrint(T a, T b){
	cout << "函数模板调用" << endl;
}

template<typename T>
void myPrint(T a, T b, T c){
	cout << "重载函数模板调用" << endl;
}

void test01(){
	int a = 10;
	int b = 20;
	int c = 30;
	
	myPrint(a,b);//普通函数优先调用
	
	// 通过空模板参数列表
	myPrint<>(a, b);
	
	// 函数模板重载
	myPrint(a, b, c);
	
	char c1 = 'a';
	char c2 = 'b';
	myPrint(c1, c2);//函数模板不需要进行隐式转换，所以优先调用函数模板
}

int main(){
	
	test01();
	
	system("pause");
	
	return 0;
}
