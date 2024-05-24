#include<iostream>
using namespace std;
#include<string>

//5.3.3 二维数组应用案例**
int main(){
	
	//案例1：考试成绩统计：
	//案例描述：有三名同学（张三，李四，王五），在一次考试中的成绩分别如下表，
	//请分别输出三名同学的总成绩
	int arr[3][3]={{100,100,100},{90,50,100},{60,70,80}};
	string names[3] = {"张三","李四","王五"};
	for(int i = 0; i < 3; i++){
		int score = 0;
		for(int j = 0; j < 3; j++){
			score = score + arr[i][j];
		}
		cout << "同学" << names[i] << "的总成绩为：" << score <<endl;
	}
	
	system("pause");
	return 0;
}
