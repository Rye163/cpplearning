
#include"swap.h"//""表示自定义的头文件

void swap(int a, int b){
	int temp = a;
	a = b;
	b = temp;
	
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}
