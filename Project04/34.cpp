#include<iostream>
#include<string>
using namespace std;

//4.4 友元的三种实现
// 目的：让一个函数或者类 访问另一个类中私有成员
// 全局函数做友元
// 类做友元
// 成员函数做友元

// 4.4.1 全局函数做友元
// 语法：friend 全局函数
// 位置：类内即可
// 建筑物类
class Building {
	
	//告诉编译器 goodGay全局函数 是 Building类的好朋友，可以访问类中的私有内容
	friend void goodGuy(Building &building);

public:
	Building(){
		m_SittingRoom = "客厅";
		m_BedRoom = "卧室";
	}
public:
	string m_SittingRoom;
private:
	string m_BedRoom;
};

//全局函数
void goodGuy(Building &building){
	
	cout << "好基友的全局函数正在访问：" << building.m_SittingRoom << endl;
	cout << "好基友的全局函数正在访问：" << building.m_BedRoom << endl;// 非友元私有属性不可访问
	
}

void test01(){
	
	Building building;
	goodGuy(building);
	
}

int main(){
	
	test01();
	
	system("pause");
	return 0;
}
