#include<iostream>
using namespace std;
 int main(){
	 
	 //switch语句
	 //请给电影评分 
	 //10 ~ 9   经典   
	 // 8 ~ 7   非常好
	 // 6 ~ 5   一般
	 // 5分以下 烂片
	 int score = 0;
	 cout << "请给电影打分：" << endl;
	 cin >> score;
	 
	 switch(score){
	 case 10:
		 cout << "经典" << endl;
		 break;//case里如果没有break，那么程序会一直向下执行
	 case 9:
		 cout << "经典" << endl;
		 break;
	 case 8:
		 cout << "非常好" << endl;
		 break;
	 case 7:
		 cout << "非常好" << endl;
		 break;
	 case 6:
		 cout << "一般" << endl;
		 break;
	 case 5:
		 cout << "一般" << endl;
		 break;
	 default:
		 cout << "烂片" << endl;
		 break;
	 }
	 
	 //if与switch区别？
	 //switch缺点：语句中表达式类型只能是整型或者字符型，不可以是一个区间
	 //有点：结构清晰，执行效率高
	 
	 system("pause");
	 return 0;
 }
