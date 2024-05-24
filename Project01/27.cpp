#include<iostream>
using namespace std;

//goto语句
//作用：可以无条件跳转语句
//语法：goto 标记;
//解释：如果标记的名称存在，执行到goto语句时，会跳转到标记的位置
//一般用于跳出多重循环

int main(){
	
	cout << "1" << endl;
	goto FLAG;//跳转到FLAG
	
	cout << "2" <<endl;
	cout << "3" <<endl;
	cout << "4" <<endl;
	
	FLAG://注意冒号
	cout << "7" <<endl;
	
	system("pause");
	return 0;
}
