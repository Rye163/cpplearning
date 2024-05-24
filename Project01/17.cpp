#include<iostream>
using namespace std;

int main (){
	
	//逻辑运算符
	
	// 非 !
	int a = 10;//10代表真，取反为假
	cout << !a << endl;
	cout << !!a << endl;
	
	// 与 &&——同真为真，其余为假
	int a2 = 10;
	int b2 = 10;
	cout << (a2 && b2) << endl;
	
	int a3 = 10;
	int b3 = 0;
	cout << (a3 && b3) << endl;
	
	// 或 ||——同假为假，其余为真
	int a4 = 10;
	int b4 = 10;
	cout << (a4 || b4) << endl;
	
	int a5 = 10;
	int b5 = 0;
	cout << (a5 || b5) << endl;
	
	int a6 = 0;
	int b6 = 0;
	cout << (a6 || b6) << endl;
	
	system("pause");
	return 0;
}
