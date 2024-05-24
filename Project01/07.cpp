#include<iostream>
using namespace std;

int main(){
	
	//1.字符型变量创建方式
	char ch = 'a';
	cout << ch << endl;
	
	//2.字符型变量所占内存大小(1个字节)
	cout << "char类型所占内存空间为：" << sizeof(ch) << endl;
	
	//3.字符型变量常见错误
	//char ch2="b";
	//char ch3='abcd';
	
	//4.字符型变量对应ASCII编码
	cout << "char'a'对应ASCII码值" << (int)ch << endl;
	ch = 65;
	cout << "65对应字符为" << ch << endl;
	
	system("pause");
	return 0;
}
