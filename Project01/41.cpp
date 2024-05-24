#include<iostream>
using namespace std;

//空指针和野指针
//空指针：指针变量指向内存中编号为0的空间
//用途：初始化指针变量
//注意：空指针指向的内存是不可以访问的（0~255这段内存为系统占用，不可访问）

int main(){
	
	//1、空指针
	int *p = NULL;//NULL表示0
	*p = 100;
	cout << *p << endl;//访问空指针报错
	
	//2、野指针——指针变量指向非法的内存空间
	int *q = (int *)0x257c5ff714;
	cout << *q << endl;
	
	//总结：空指针和野指针都不是我们申请的空间，因此不要访问。
	
	system("pause");
	return 0;
}
