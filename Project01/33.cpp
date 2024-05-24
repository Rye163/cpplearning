#include<iostream>
using namespace std;

//5.3.2 二维数组数组名
//查看二维数组所占内存空间
//获取二维数组首地址

int main(){
	
	//二维数组数组名
	int arr[2][3] = {{1,2,3},{4,5,6}};
	//查看二维数组所占内存空间
	cout << "二维数组所占内存空间：" << sizeof(arr) <<endl;
	cout << "二维数组一行大小：" << sizeof(arr[0]) <<endl;
	cout << "二维数组元素大小：" << sizeof(arr[0][0]) <<endl;
	cout << "二维数组行数： " << sizeof(arr) / sizeof(arr[0]) << endl;
	cout << "二维数组列数： " << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;
	//获取二维数组首地址
	cout << "二维数组首地址：" << (long long)arr <<endl;
	cout << "二维数组第一行地址：" << (long long)arr[0] << endl;
	cout << "二维数组第二行地址：" << (long long)arr[1] << endl;
	cout << "二维数组第一个元素地址：" << (long long)&arr[0][0] << endl;
	cout << "二维数组第二个元素地址：" << (long long)&arr[0][1] << endl;
	
	system("pause");
	return 0;
}
