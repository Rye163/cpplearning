#ifndef ADDRESSBOOK_H
#define ADDRESSBOOK_H

#endif

#include<iostream>
using namespace std;

#include<string>
#define MAX 1000

//设计联系人结构体
struct Person{
	
	string m_Name;//姓名
	int m_Gender;//性别： 1.男；2.女
	int m_Age;//年龄
	string m_Phone;//电话
	string m_Addr;//地址
	
};

//设计通讯录结构体
struct Addressbooks{
	
	//通讯录中保存联系人数组
	struct Person personArray[MAX];
	
	//通讯录中当前记录联系人个数
	int m_Size;
	
};

// 函数声明
//1.添加联系人
void addPerson(Addressbooks * abs);

//2.显示联系人
void showPerson(Addressbooks *abs);

//3.删除联系人
//3.1.封装检测联系人是否存在函数
int isExist(Addressbooks * abs, string name);
//3.2.封装删除联系人函数
void deletPerson(Addressbooks * abs);

//4.查找联系人
// 4.1 封装查找联系人函数
void findPerson(Addressbooks * abs);

//5.修改联系人
void modifyPerson(Addressbooks * abs);

//6.清空联系人
void cleanPerson(Addressbooks * abs);

//菜单界面
void showMenu();
