#include<iostream>
using namespace std;

//功能：利用new操作符在堆区开辟数据
//语法：new 数据类型
//(1)堆区开辟的数据，由程序员手动开辟，手动释放，释放利用操作符delete
//(2)利用new创建的数据，会返回该数据对应的类型的指针

//1.new的基本语法
int* func(){
	//在堆区创建一个整形数据
	int* p = new int(10);
	return p;
	
}

void test01(){
	
	int *p = func();
	cout << *p <<endl;
	cout << *p <<endl;
	
	delete p;
	cout << *p <<endl;//内存已经被释放，再次访问就是非法操作，会报错
	
}//堆区开辟的数据，由程序员手动开辟，手动释放

//2.在堆区利用new开辟数组
void test02(){
	//创建10个整形数据的数组
	int * arr = new int[10];//中括号代表数组元素个数
	
	for( int i = 0; i < 10; i++){
		arr[i] = i + 100;//给10个元素赋值为100~109
	}
	for( int i = 0; i < 10; i++){
		cout << arr[i] << endl;
	}
	//释放堆区数组
	delete[] arr;//释放数组时，delete后要加[]
	
}


int main(){
	
	test01();
	
	test02();
	
	system("pause");
	return 0;
}
