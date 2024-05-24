#include<iostream>
using namespace std;

//continue语句
//作用：在循环语句中，跳过本次循环中余下尚未执行的语句，继续执行下一次循环
//与break的区别：continue并没有使整个循环终止，而break会跳出循环

int main(){
	
	for(int i = 0; i < 100;i++){
		if(i % 2 == 0){
			continue;//偶数退出本次循环，执行i++进入下一次循环
		}
		cout << i << endl;//奇数输出
	}
	
	system("pause");
	return 0;
}
