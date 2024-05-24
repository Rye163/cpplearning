#include<iostream>
#include<string>
using namespace std;

//8.6 结构体做函数参数 
//作用：将结构体作为参数向函数中传递

//传递方式有两种：
//1.值传递
//2.地址传递

//1.学生结构体定义
struct student
{
	//成员列表
	string name;  //姓名
	int age;      //年龄
	int score;    //分数
};

//结构体做函数参数
//将学生传入到一个参数中，打印学生身上的所有信息

//1.值传递
void printStudent1(struct student stu){
	
	stu.age = 100;//值传递形参改变不影响实参
	cout <<"子函数1中打印的结果：" << endl;
	cout << "姓名：" << stu.name << endl;
	cout << "年龄：" << stu.age << endl;
	cout << "分数：" << stu.score << endl;
}

//2.地址传递
void printStudent2(struct student *p){
	p->age = 50;//地址传递形参改变影响实参
	cout <<"子函数2中打印的结果：" << endl;
	cout << "姓名：" << p->name << endl;
	cout << "年龄：" << p->age << endl;
	cout << "分数：" << p->score << endl;
}//利用操作符 "->" 可以通过结构体指针访问结构体属性

int main(){
	
	struct student s;
	s.name = "张三";
	s.age = 20;
	s.score = 85;
	
	cout << "main函数（修改前）中打印的结果：" << endl;
	cout << "姓名：" << s.name << endl;
	cout << "年龄：" << s.age << endl;
	cout << "分数：" << s.score << endl;
	
	printStudent1(s);
	
	printStudent2(&s);
	
	cout << "main函数（修改后）中打印的结果：" << endl;
	cout << "姓名：" << s.name << endl;
	cout << "年龄：" << s.age << endl;
	cout << "分数：" << s.score << endl;
	
	//总结：如果不想修改主函数中的数据，用值传递，反之用地址传递
	
	system("pause");
	return 0;
}
