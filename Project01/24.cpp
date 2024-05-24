#include<iostream>
using namespace std;

int main(){
	//嵌套循环
    //作用：在循环体中再嵌套一层循环，解决一些实际问题
	//举例：在屏幕中打印星图
//	
	for(int i = 0;i < 10; i++){
		for(int j = 0;j < 10; j++){
			cout << "* ";
		}
		cout << endl;
	}
	
	//练习案例：乘法口诀表
	//案例描述：利用嵌套循环，实现九九乘法表（下三角矩阵）
	

	for(int i = 1;i <=9 ;i++){//定义行数
		for(int j = 1;j <= i;j++){//定义列数
			cout << j <<"*"<< i <<"="<< j*i<<"\t";//注意水平制表符的使用方法
		}
		cout << endl;
	}
	
	system("pause");
	return 0;
}
