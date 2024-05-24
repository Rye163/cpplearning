#include<iostream>
using namespace std;
//time系统时间头文件
#include<ctime>

int main (){
	//while循环
	//在屏幕中打印0~9这10个数字
	
//	int a = 0;
//	while( a < 10 ){
//
//		cout << a << endl;
//		++a;// a++;
//		
//	}
	
	//练习案例：猜数字
	//系统随机生成一个1到100之间的数字，玩家进行猜测，如果猜错，提示玩家数字过大或过小，如果猜对恭喜玩家胜利，并且退出游戏。
	
	//添加随机数种子，利用时间生成随机数，防止每次随机数一样
	srand((unsigned int)time(NULL) );
	
	int num = rand()%100 + 1;    //rand()%100表示0~99的随机数
	cout << num << endl;
	int a = 0;
	cout <<"请输入一个1到100之间的数字" << endl;
	cin >> a;
	while( a != num ){//while( 1 )可用break结束
		if( a < num ){
			cout << "数字过小请重新输入" <<endl;
		}
		if( a > num ){
			cout << "数字过大请重新输入" <<endl;
		}
		cin >> a;
	}
	cout << "正确" << endl;
	
	
	
	
	system("pause");
	return 0;
}
