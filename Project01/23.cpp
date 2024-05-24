#include<iostream>
using namespace std;


//for循环
//作用：满足循环条件，执行循环语句

//语法： for(起始表达式;条件表达式;末尾循环体) { 循环语句; }
int main(){
	//在屏幕中打印0~9这10个数字
//	for(int a = 0; a < 10; a++){//";"之间可以不写
//		cout << a << endl;
//	}
	
	//练习：敲桌子
	//案例描述：从1开始数到数字100， 
	//如果数字个位含有7，或者数字十位含有7，或者该数字是7的倍数，我们打印敲桌子
	//其余数字直接打印输出
	for(int num = 1; num <= 100; num++){
		
		if( num % 10 == 7 || num / 10 == 7 || num % 7 == 0){
			cout << "敲桌子" << endl;
		}
		else{
			cout << num << endl;
		}
	}

	
	system("pause");
	return 0;
}
