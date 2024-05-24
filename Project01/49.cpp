#include<iostream>
#include<string>
using namespace std;

//8.5 结构体嵌套结构体
//作用：结构体中的成员可以是另一个结构体
//例如：每个老师辅导一个学员，一个老师的结构体中，记录一个学生的结构体

//定义学生结构体
struct student{
	
	string name;
	int age;
	int score;
	
};

//定义老师结构体
struct teacher{
	
	int id;
	string name;
	int age;
	struct student stu;//辅导的学生
	
};

int main(){
	
	//创建老师结构体变量
	teacher t;
	t.id = 10000;
	t.name = "老王";
	t.age = 40;
	//子结构体变量
	t.stu.name = "张三";
	t.stu.age = 18;
	t.stu.score = 100;
	
	cout << "教师id：" << t.id << endl;
	cout << "教师姓名：" << t.name<< endl;
	cout << "教师年龄：" << t.age  << endl;
	
	cout << "学生姓名：" << t.stu.name << endl;
	cout << "学生年龄：" << t.stu.age << endl;
	cout << "分数：" << t.stu.score << endl;
	
	system("pause");
	return 0;
}
