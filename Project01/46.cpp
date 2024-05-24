#include<iostream>
#include<string>
using namespace std;

//8.2 结构体定义和使用
//语法：struct 结构体名 { 结构体成员列表 }；

//结构体定义:创建学生数据类型——学生包括（姓名，年龄，分数）
//自定义数据类型，一些类型集合组成的一个类型
struct student// struct关键字定义时不可省略
{
	//成员列表
	string name;  //姓名
	int age;      //年龄
	int score;    //分数
}s3; //注意！结构体变量创建方式3 

//通过结构体创建变量的方式有三种：
//1、struct 结构体名 变量名
//2、struct 结构体名 变量名 = { 成员1值 ， 成员2值...}
//3、定义结构体时顺便创建变量
int main(){
	
	//1、struct 结构体名 变量名
	struct student s1;//struct 关键字可以省略
	//给s1属性赋值，通过"."访问结构体变量中的属性
	s1.name = "张三";
	s1.age = 18;
	s1.score = 100;
	
	cout << "姓名：" << s1.name << endl;
	cout << "年龄：" << s1.age  << endl;
	cout << "分数：" << s1.score << endl;
	
	//2、struct 结构体名 变量名 = { 成员1值 ， 成员2值...}
	struct student s2 = {"李四", 19, 80};
	cout << "姓名：" << s2.name << endl;
	cout << "年龄：" << s2.age  << endl;
	cout << "分数：" << s2.score << endl;
	
	//3、定义结构体时顺便创建变量
	s3.name = "王五";
	s3.age = 17;
	s3.score = 90;
	cout << "姓名：" << s3.name << endl;
	cout << "年龄：" << s3.age  << endl;
	cout << "分数：" << s3.score << endl;
	
	system("pause");
	return 0;
}
