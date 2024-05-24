#include<iostream>
#include<string>
using namespace std;

//8.8.2 案例2
//案例描述：
//设计一个英雄的结构体，包括成员姓名，年龄，性别;创建结构体数组，数组中存放5名英雄。
//通过冒泡排序的算法，将数组中的英雄按照年龄进行升序排序，最终打印排序后的结果。

//创建英雄结构体
struct Hero{
	
	string name;//姓名
	int age;//年龄
	string gender;//性别
	
};

//冒泡排序函数实现年龄升序排列
void bubbleSort(struct Hero heroArray[], int len){
	
	for(int i = 0; i < len - 1; i++){
		for(int j = 0; j < len - 1- i; j++){
			if(heroArray[j].age > heroArray[j + 1].age){
				struct Hero temp = heroArray[j];//用结构体临时数据表示（struct可省略）
				heroArray[j] = heroArray[j + 1];
				heroArray[j + 1] = temp;//排序记得其他不参与排序的信息位置也要修改
			}
		}
	}

}

//打印排序后信息函数
void printInfo(struct Hero heroArray[], int len){
	
	cout << "排序后英雄信息：" << endl;
	for(int i = 0; i < len; i++){
		cout << "英雄姓名：" << heroArray[i].name << "\t年龄：" << heroArray[i].age << 
		"\t性别：" << heroArray[i].gender << endl;
	}
	
}

int main(){
	
	//1.创建数组储存5名英雄
	struct Hero heroArray[5] = {
		{"刘备",23,"男"},
		{"关羽",22,"男"},
		{"张飞",20,"男"},
		{"赵云",21,"男"},
		{"貂蝉",19,"女"}
	};
	int len = sizeof(heroArray) / sizeof(heroArray[0]);
	
	//测试代码
	cout << "排序前英雄信息：" << endl;
	for(int i = 0; i < len; i++){
		cout << "英雄姓名：" << heroArray[i].name << "\t年龄：" << heroArray[i].age << 
		"\t性别：" << heroArray[i].gender << endl;
	}
	
	//2.对数组进行冒泡排序（年龄升序排列）
	bubbleSort(heroArray, len);
	
	//3.将排序后结果打印输出
	printInfo(heroArray, len);
	
	system("pause");
	return 0;
}
