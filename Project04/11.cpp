#include<iostream>
using namespace std;

//3.2 函数占位参数
//C++中函数的形参列表里可以有占位参数，用来做占位，调用函数时必须填补该位置
//语法：返回值类型 函数名 (数据类型){}
//在现阶段函数的占位参数存在意义不大，但是后面的课程中会用到该技术
//占位参数还可以有默认参数

void func(int a, int = 10){//第二个int负责占位
	cout << "this is a func." << endl;
}//实际上占位参数没有在函数体中使用

int main(){
	
	func(1, 10);//没有第二个数据无法调用函数
	
	system("pause");
	return 0;
}
