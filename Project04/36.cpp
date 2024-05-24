#include<iostream>
#include<string>
using namespace std;

// 4.4.2 成员函数做友元
class Building;

class GoodGuy{
public:
	GoodGuy();
	
	void visit();//只让visit函数作为Building的好朋友，可以访问Building中私有内容
	void visit2();// visit2函数不可以访问Building中私有内容
	
	Building * building;
};

class Building{
	
	//告诉编译器  goodGay类中的visit成员函数 是Building好朋友，可以访问私有内容
	friend void GoodGuy::visit();
	
public:
	Building();
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
	cout << "好基友的全局函数正在访问：" << building->m_BedRoom << endl;
}

void GoodGuy::visit2(){
	cout << "好基友的全局函数正在访问：" << building->m_SittingRoom << endl;
	//cout << "好基友的全局函数正在访问：" << building->m_BedRoom << endl;// 非友元私有属性不可访问
}

void test01(){
	GoodGuy g;
	g.visit();
}
void test02(){
	GoodGuy g;
	g.visit2();
}

int main(){
	
	test01();
	
	test02();
	
	system("pause");
	return 0;
}
