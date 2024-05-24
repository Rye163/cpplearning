#include<iostream>
using namespace std;

// 4.5.6 函数调用运算符重载
// 语法：()

// 函数调用运算符 ()  也可以重载
// 由于重载后使用的方式非常像函数的调用，因此称为仿函数
// 仿函数没有固定写法，非常灵活


class MyPrint{
public:
	
	//重载函数调用
	void operator()(string test){
		cout << test << endl;
	}
	
};

// 正常函数调用
void MyPrint02(string test){
	cout << test << endl;
}

void test01(){
	
	MyPrint myPrint;
	
	myPrint("Hello World");// 重载函数调用
	MyPrint02("Hello World");// 正常函数调用
}


// 仿函数没有固定写法，非常灵活:返回值，参数列表都没有固定写法
class MyAdd{
public:
	
	int operator()(int num1, int num2){
		return num1 + num2;
	}
	
};

void test02(){
	MyAdd myAdd;
	int ret = myAdd(100, 100);
	cout << "ret =" << ret << endl;
	
	// 匿名函数对象(22.cpp)重载函数调用——使用原因：用后就释放——语法：对象()
	cout << MyAdd()(100, 100) << endl;
	
}

int main(){
	
	test01();
	test02();
	
	system("pause");
	return 0;
}
