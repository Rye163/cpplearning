#include<iostream>
using namespace std;

int main(){
	
	short num1 = 10;
	cout << "short类型所占内存空间为：" << sizeof(num1) << endl;
	
	int num2 = 10;
	cout << "int类型所占内存空间为：" << sizeof(num2) << endl;
	
	long num3 = 10;
	cout << "long类型所占内存空间为：" << sizeof(num3) << endl;
	
	long long num4 = 10;
	cout << "long long类型所占内存空间为：" << sizeof(num4) << endl;
	
	//整数大小比较
	//short(2)<int(4)<=long(4)<long long(8)
	
	system("pause");
	return 0;
}
