#include<iostream>
#include<string>
using namespace std;

// 4.4.2 类做友元
class Building;// 前向声明

class GoodGuy{
public:
	
	GoodGuy();
	
	void visit();// 参观函数，访问Building中的属性
	
	Building *building;
	
};

class Building{
	
	//告诉编译器 goodGuy类是Building类的好朋友，可以访问到Building类中私有内容
	friend class GoodGuy;
public:
	Building();// 构造函数
public:
	string m_SittingRoom;
private:
	string m_BedRoom;
};

// 类外写成员函数
Building::Building(){
	m_SittingRoom = "客厅";
	m_BedRoom = "卧室";
}

GoodGuy::GoodGuy(){
	// 创建建筑物的对象
	building = new Building;// 堆区创建，building为指针
}

void GoodGuy::visit(){
	cout << "好基友的全局函数正在访问：" << building->m_SittingRoom << endl;
	cout << "好基友的全局函数正在访问：" << building->m_BedRoom << endl;// 非友元私有属性不可访问
}

void test01(){
	GoodGuy g;
	g.visit();
}

int main(){
	
	test01();
	system("pause");
	return 0;
}
