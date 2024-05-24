#include<iostream>
using namespace std;

int main(){
	
	//单精度 float 4字节 7位有效数字
	//双精度 double 8 字节 15~16位有效数字(默认为双精度)
	//默认情况下输出一小数，会显示6位有效数字
	
	float f1 = 3.14f;//不加f默认为双精度
	cout << "f1 = " << f1 << endl;
	
	double f2 = 3.14;
	cout << "f2 = " << f2 << endl;
	
	//统计float和double占用内存空间
	
	cout << "float类型所占内存空间为：" << sizeof(float) << endl;
	cout << "double类型所占内存空间为：" << sizeof(double) << endl;
	
	//科学计数法
	float f3 = 3e2;//3*10^2
	cout << "f3 = " << f3 << endl;
	float f4 = 3e-2;//3*10^-2
	cout<< "f4 = " << f4 << endl;
	
	system("pause");
	return 0;
}
