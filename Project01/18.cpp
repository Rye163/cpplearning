#include<iostream>
using namespace std;

int main(){
	
	//选择结构
	
	//单行if语句
	//输入一个分数，如果分数大于600分，视为考上一本大学，并在屏幕上打印
//	int score = 0;
//	cout << "请输入分数：" << endl;
//	cin >> score;
//	if (score > 600){ //if条件表达式后不要加分号
//	cout << "垃圾一本，切" << endl;
//	}
//	
//	//多行if语句
//	int score1 = 0;
//	cout << "请输入分数：" << endl;
//	cin >> score1;
//	if (score1 > 600){ //if条件表达式后不要加分号
//		cout << "垃圾一本，切" << endl;
//	}
//	else {
//		cout << "垃圾一本都没有" << endl;
//	}
	
//	//多条件if语句
//	int score2 = 0;
//	cout << "请输入分数：" << endl;
//	cin >> score2;
//	if (score2 > 600){ //if条件表达式后不要加分号
//		cout << "垃圾一本，切" << endl;
//	}
//	else if (score2 > 500){
//		cout << "垃圾二本，切" << endl;
//	}
//	else if (score2 > 400){
//		cout << "垃圾三本，切" << endl;
//	}
//	else {
//		cout << "垃圾本科都没有" << endl;
//	}
	
	//练习1:提示用户输入一个高考考试分数，根据分数做如下判断
	//分数如果大于600分视为考上一本，大于500分考上二本，大于400考上三本，其余视为未考上本科；
	//在一本分数中，如果大于700分，考入北大，大于650分，考入清华，大于600考入人大。
//	int score3=0;
//	cout << "请输入您的高考分数：" << endl;
//	cin >> score3;
//	cout << "您的高考分数为：" << score3 << endl;
//	if (score3 > 600){
//		cout << "恭喜考上一本大学！" << endl;
//		if (score3 >700){
//			cout << "恭喜考上北京大学！" << endl;
//		}
//		else if(score3 >650){
//			cout << "恭喜考上清华大学！" << endl;
//		}
//		else {
//			cout << "恭喜考上人大！" << endl;
//		}
//	}
//	else if (score3 >500){
//		cout << "恭喜考上二本大学！" << endl;
//	}
//	else if (score3 >400){
//		cout << "恭喜考上三本大学！" << endl;
//	}
//	else {
//		cout << "未考上本科" << endl;
//	}
	
	//练习2：三只小猪称体重
	//有三只小猪ABC，请分别输入三只小猪的体重，并且判断哪只小猪最重？
	int A = 0;
	int B = 0;
	int C = 0;
	
	cout << "请分别输入A、B、C三只小猪体重：" << endl;
	cin >> A;
	cin >> B;
	cin >> C; 
	
	cout << "小猪A的体重为：" << A << endl;
	cout << "小猪B的体重为：" << B << endl;
	cout << "小猪C的体重为：" << C << endl;
	
	A = A - C;
	B = B - C;
	if((A > B)&&(A > 0)){
		cout << "小猪A最重" << endl;
	}
	else if ((A < B)&&(B > 0)){
		cout << "小猪B最重" << endl;
	}
	else {
		cout << "小猪C最重" << endl;
	}
	
	system("pause");
	return 0;
}
