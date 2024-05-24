#include<iostream>
#include<string>

using namespace std;

int main(){
	
	//1.字符串构造
	//1.1 c风格字符串——注意[]；注意双引号
	char str1[] = "hello world";
	cout << "str1 = " << str1 << endl;
	
	//1.2 cpp风格字符串——头文件加#include<string>
	string str2 = "hello world";
    str2 = 'h';
	cout << "str2 = " << str2 << endl;
	
	//1.3 拷贝构造：
	string str3 = "hello world";
	string str4(str3);
	cout << "str4 = " << str4 << endl;
	
	//1.4 多个重复项构造：
	string str5(5, 'a');
	cout << "str5 = " << str5 << endl;
	
	//1.5 用函数进行赋值：
	string str6;
	str6.assign("hello");
	str6.assign("hello world" , 7);//第二个参数代表只要前五个，空格也占一个位置，str6 = "hello w"
	cout << "str6 = " << str6 << endl;
	
	//2.字符串拼接
	//2.1 用+进行拼接：
	string str7 = "hello";
	str7 += " world";
	cout << "str7 = " << str7 << endl;
	
	string str8 = "hello";
	string str = " world";
	str8 += str; 
	cout << "str8 = " << str8 << endl;
	
	//2.2 用函数进行拼接
	string str9 = "hello";
	str9.append(" world");//str1 = "hello world"
	cout << "str9 = " << str9 << endl;
	
	string str10 = "hello";
	str10.append(" world",3);//str1 = "hello wo",参数3代表只要前3个
	cout << "str10 = " << str10 << endl;
	
	string str11 = "hello";
	str11.append(" w orld",2,3);//str1 = "hello or",参数2代表从下标2开始,参数3代表要3个字符
	cout << "str11 = " << str11 << endl;
	
	//3.字符串查找子串
	//3.1 左查返回子串的第一个位置：
	string str12 = "abcdefdef";
	cout << "字符串为：" << str12 << endl;
	str12.find("def");
	cout << "左查返回def的第一个位置：" << str12.find("def") << endl;
	
	//3.2 右查返回子串的第一个位置：
	str12.rfind("def");
	cout << "右查返回def的第一个位置：" << str12.rfind("def") << endl;
	
	//4.字符串替换
	
	
	system("pause");
	return 0;
}
