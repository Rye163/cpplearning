#include<iostream>
using namespace std;

// 1.2.2 函数模板注意事项

// 注意事项：
// 1. 自动类型推导，必须推导出一致的数据类型T,才可以使用
// 2. 模板必须要确定出T的数据类型，才可以使用

template<typename T>
void mySwap(T &a, T &b){
	swap(a,b);
}

void test01(){
	int a = 10;
	int b = 20;
	
	mySwap(a, b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	char c = 'c';
	// mySwap(a, c);错误，没有推导出一致的数据类型T
}

template<class T>
void func(){
	cout << "函数func调用" << endl;
}

void test02(){
	// func();错误，没有办法确定T的数据类型
	func<int>();//正确
}

int main(){
	
	test01();
	test02();
	
	system("pause");
	
	return 0;
}
