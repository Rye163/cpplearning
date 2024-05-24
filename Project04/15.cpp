#include<iostream>
#include<string>
using namespace std;

//示例2：设计一个学生类，属性有姓名和学号，
//可以给姓名和学号赋值，可以显示学生的姓名和学号

//设计学生类
//方法一
//class Student{
//	
//public://公共权限
//	//属性
//	string m_Name;
//	int m_Id;
//	//行为
//	//显示姓名与学号
//	void showStudent(){
//		cout << "\t姓名：" << m_Name << "\t学号：" << m_Id << endl;
//	}
//	
//};

//方法二
class Student{
	public://公共权限
	
	//类中的属性与行为 统一称为 成员
	//属性 成员属性 成员变量
	//行为 成员函数 成员方法
	
    //属性
	string m_Name;
	int m_Id;
	
    //行为
	//显示姓名与学号
	void showStudent(){
		cout << "\t姓名：" << m_Name << "\t学号：" << m_Id << endl;
	}
	//给姓名赋值
	void setName(string name){
		m_Name = name;
	}
	//给学号复制
	void setId(int Id){
		m_Id = Id;
	}
};


int main(){
	
	//创建一个具体的学生——实例化
	Student s1;
	
    //给s1对象进行赋值
	//s1.m_Name = "张三";
	s1.setName("张三");
	
    //s1.m_Id = 110;
	s1.setId(110);
	
    //显示学生信息
	s1.showStudent();
	
	Student s2;
	s2.m_Name = "李四";
	s2.m_Id = 111;
	s2.showStudent();
	
	system("pause");
	return 0;
}
