#include<iostream>
using namespace std;

// 1.2.4 普通函数与函数模板的区别

// 普通函数与函数模板区别：**
// 1. 普通函数调用时可以发生自动类型转换（隐式类型转换）
// 2. 函数模板调用时，如果利用自动类型推导，不会发生隐式类型转换
// 3. 如果利用显示指定类型的方式，可以发生隐式类型转换

//普通函数
int myAdd01(int a, int b){
	return a + b;
}

void test01(){
	int a = 10;
	int b = 20;
	
	myAdd01(a, b);
	cout << myAdd01(a, b) << endl;
	
	char c = 'c';
	myAdd01(a, c);// 这里实现了将char类型的c隐式类型转换为int型的99
	cout << myAdd01(a, c) << endl;
}

template<typename T>
T myAdd02(T a, T b){// 这里为什么不能使用引用？——引用实质上是常量指针，指针内容不能改变，所以不能隐式类型转化
	return a + b;
}

void test02(){
	int a = 10;
	int b = 20;
	
	myAdd02(a, b);
	cout << myAdd02(a, b) << endl;
	
	char c = 'c';
//	myAdd02(a, c);// 这里使用自动类型推导，不能将c进行隐式转换
//	cout << myAdd02(a, c) << endl;
	
	// 显示指定
	myAdd02<int>(a, c);
	cout << myAdd02<int>(a, c) << endl;
}

int main(){
	
	test01();
	test02();
	
	system("pause");
	
	return 0;
}
