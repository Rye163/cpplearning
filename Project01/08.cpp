#include<iostream>
using namespace std;

int main(){
	
	//转义字符
	//换行 \n
	cout << "hello world\n";
	
	//反斜杠 \\——输入两个反斜杠才能输出一个反斜杠
	cout << "\\" << endl;
	
	//水平制表符 \t——整齐输出数据
	cout << "aaa\thello world" << endl;
	
	system("pause");
	return 0;
}
