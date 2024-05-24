#include<iostream>
using namespace std;

int main (){
	//整形
	//1. 短整型 2字节（-2^15 ~ 2^15-1 —— -32768 ~ 32767）
	short num1 = 32768;
	//2. 整形 4字节（-2^31 ~ 2^31-1）
	int num2 = 32768;
	//3.长整型
	//Windows为4字节，Linux为4字节(32位)8字节(64位)（-2^31 ~ 2^31-1）
	long num3 = 10;
	//4. 长长整形 8字节（-2^63 ~ 2^63-1）
	long long num4 = 10;
	
	cout << "num1=" << num1 << endl;
	cout << "num2=" << num2 << endl;
	cout << "num3=" << num3 << endl;
	cout << "num4=" << num4 << endl;
	system ("pause");
	return 0;
}
