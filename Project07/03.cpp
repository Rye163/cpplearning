#include<iostream>
using namespace std;

//1.2.3 函数模板案例

// 案例描述：
// 利用函数模板封装一个排序的函数，可以对**不同数据类型数组**进行排序
// 排序规则从大到小，排序算法为**选择排序**
// 分别利用**char数组**和**int数组**进行测试

// 提供交换模板
template<typename T>
void mySwap(T &a, T &b){
	swap(a, b);
}

// 提供选择排序模板
template<typename T>
void mySort(T arr[], int len){
	for (int i = 0; i < len; i++){
		int max = i;
		for (int j = i + 1; j < len; j++){
			if (arr[j] > arr[max]){
				max = j;
			}
		}
		if (max != i){
			mySwap(arr[max], arr[i]);
		}
	}
}

// 提供打印数组模板
template<typename T>
void printArr(T arr[], int len){
	for (int i = 0; i < len; i++){
		cout << arr[i] << " ";
	}
	cout << endl;
}


void test01(){
	char charArr[] = "badcfe";
	int lenChar = sizeof(charArr) / sizeof(char);
	mySort(charArr, lenChar);
	printArr(charArr, lenChar);
}

void test02(){
	int intArr[] = {7,5,4,8,9,2,1,0};
	int lenInt = sizeof(intArr) / sizeof(int);
	mySort(intArr, lenInt);
	printArr(intArr, lenInt);
}

int main(){
	
	test01();
	test02();
	
	system("pause");
	
	return 0;
}
