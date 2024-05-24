#include<iostream>
using namespace std;

//7.6 指针和数组
//作用：利用指针访问数组中元素

int main(){
	
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	
	int * p = arr;//arr就是数组的首地址
	
	cout << "第一个元素：" << arr[0] << endl;
	cout << "指针p访问第一个元素：" << *p << endl;
	
	p++;//指针向后偏移8个字节，首地址+8即为第二个元素的地址
	cout << "指针p访问第二个元素：" << *p << endl;
	
	//利用指针遍历数组
	int * p2 = arr;
	for(int i = 0; i < 10; i++){
		cout << *p2 << endl;
		p2++;
	}
	
	system("pause");
	return 0;
}
