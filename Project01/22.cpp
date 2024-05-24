#include<iostream>
using namespace std;

//do while语句
//作用：满足循环条件，执行循环语句

//语法：do{ 循环语句 } while(循环条件);

//注意：与while的区别在于do...while会先执行一次循环语句，再判断循环条件
int main (){
	//在屏幕中打印0~9这10个数字
	int a = 0;
	do{
		cout << a << endl;
		a++;
	}
	while( a < 10);
	
	//练习：水仙花数
	//案例描述：水仙花数是指一个3位数，它的每个位上的数字的3次幂之和等于它本身
	//1. 输出所有三位数
	//2. 获取个位、十位、百位
	//3. 判断：个位^3+十位^3+百位^3=本身
	int num = 100;
	do{
		int a = 0;
		int b = 0;
		int c = 0;
		a = num % 10;    //获取个位
		b = num / 10;
		b = b % 10;      //获取十位
		c = num / 100;   //获取百位
		if( a*a*a + b*b*b +c*c*c == num ){//判断
			cout << num <<endl;
		}
		
		num++;
	}
	while(num < 1000);
	
	system("pause");
	return 0;
}
