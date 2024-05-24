#include<iostream>
#include<string>
using namespace std;

//8.7 结构体中 const使用场景
//作用：用const来防止误操作

struct student{
	
	string name;
	int age;
	int score;
	
};

//结构体做函数参数——地址传递
void printStudent(const student *stu){
	
//	stu->age = 150;加入const一旦有修改的操作就会报错——防止误操作
	cout <<"子函数1中打印的结果：" << endl;
	cout << "姓名：" << stu->name << endl;
	cout << "年龄：" << stu->age << endl;
	cout << "分数：" << stu->score << endl;
}

int main(){
	
	//创建结构体变量
	struct student s = { "张三", 15, 70 };
	
	//通过函数打印结构体变量信息
	printStudent( &s );
	
	cout << "main函数输出年龄：" << s.age << endl;
	
	//总结：值传递占内存，效率低，优化差
	//地址传递可减少内存空间，不会复制新的副本出来
    //地址传递形参改变会影响实参，因此使用const防止误操作
	
	system("pause");
	return 0;
}
