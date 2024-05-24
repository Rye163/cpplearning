#include<iostream>
using namespace std;

//常量定义方式：
//1. #define 宏常量
//2. const修饰变量

#define Day 7//注意宏常量后没有分号

int main(){
	
	cout << "一周里总共有：" << Day << "天" << endl;
	const int month = 12;
	cout << "一年里总共有" << month << "个月份" << endl;
	
	system("pause");
	return 0;
}
