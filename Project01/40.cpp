#include<iostream>
using namespace std;

// 7.3 指针所占内存空间
//提问：指针也是种数据类型，那么这种数据类型占用多少内存空间？
//32位操作系统中，指针保存的地址占4个字节（所有指针类型）
//64位操作系统中，指针保存的地址占8个字节（所有指针类型）

int main(){
	
	int a = 10;
	int * p;
	p = &a;
	
	cout << "sizeof(int *) = " << sizeof(int *) << endl;
	cout << "sizeof(p) = " << sizeof(p) << endl;
	cout << "sizeof(char *) = " << sizeof(char *) << endl;
	cout << "sizeof(float *) = " << sizeof(float *) << endl;
	cout << "sizeof(double *) = " << sizeof(double *) << endl;
	
	system("pause");
	return 0;
}
