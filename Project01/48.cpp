#include<iostream>
#include<string>
using namespace std;

//8.4 结构体指针
//作用：**通过指针访问结构体中的成员

//利用操作符 "->" 可以通过结构体指针访问结构体属性

//1.创建结构体
struct student
{
	//成员列表
	string name;  //姓名
	int age;      //年龄
	int score;    //分数
};

int main(){
	
	//2.创建学生结构体变量
	struct student s = {"张三", 20, 80};
	
	//3.通过指针指向结构体变量
	struct student * p = &s;//struct课省略
	
	//4.通过指针访问结构体变量中的数据
	cout << "姓名：" << p->name << endl;
	cout << "年龄：" << p->age  << endl;
	cout << "分数：" << p->score << endl;
	
	
	system("pause");
	return 0;
}
