#include<iostream>
using namespace std;


int main(){
	
	//练习案例1：五只小猪称体重
	//案例描述：在一个数组中记录了五只小猪的体重，如：int arr[5] = {300,350,200,400,250};
	//找出并打印最重的小猪体重。
	//解题1：
//	int arr[5] = {300,350,200,500,250};
//	int max = 0;
//	for(int i = 0; i < 5; i++){
//		if(arr[i] > max){
//			max = arr[i];
//		}
//		else continue;
//	}
//	cout << "最重的小猪体重为：" << max << endl;
	//解题2：三目运算符
//	for(int i = 0; i < 5; i++){
//		arr[i] > max? max = arr[i]:continue;
//	}
//	cout << "最重的小猪体重为：" << max << endl;
	
	
	//练习案例2：数组元素逆置
	//案例描述：请声明一个5个元素的数组，并且将元素逆置.
	//(如原数组元素为：1,3,2,5,4;逆置后输出结果为:4,5,2,3,1);
	int arr1[5] = {1,3,2,5,4};
	cout << "数组逆置前：" << endl;
	for(int i = 0; i < 5; i++){
		cout << arr1[i] << endl;
	}
	int start = 0;//起始下标
	int end = sizeof(arr1) / sizeof(arr1[0])-1;//结束下标
	while(start < end){
		int temp = arr1[start];
		arr1[start] = arr1[end];
		arr1[end] = temp;//中间元素实现元素互换
		start++;//下标更新
		end--;
	}
	cout << "数组逆置后：" << endl;
	for(int i = 0; i < 5; i++){
		cout << arr1[i] << endl;
	}
	
	system("pause");
	return 0;
}
