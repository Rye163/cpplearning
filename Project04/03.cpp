#include<iostream>
using namespace std;

//堆区：由程序员分配释放,若程序员不释放,程序结束时由操作系统回收
//在C++中主要利用new在堆区开辟内存

int* func(){
	
	//利用new关键字，可以将数据开辟到堆区
	//指针本质上也是局部变量，也存放在栈上，指针保存的数据保存在堆区
	int *a =new int(10);//new将数据的地址给出
	
	return a;
}

int main(){
	
	int *p = func();
	
	cout << *p << endl;
	cout << *p << endl;
	
	system("pause");
	return 0;
}
