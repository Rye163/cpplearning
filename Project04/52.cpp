#include<iostream>
using namespace std;

//4.6.8 菱形继承

//菱形继承概念：**
//两个派生类继承同一个基类
//又有某个类同时继承者两个派生类
//这种继承被称为菱形继承，或者钻石继承

//动物类
class Animal{
public:
	
	int m_Age;
};

// 利用虚继承解决菱形继承数据重复的问题
// 语法：class 子类：virtual 继承方式 父类
// 此时的Animal类为 虚基类

//羊类
class Sheep : virtual public Animal{
	//这里虚继承了"vbptr"——虚基类指针
	//指向"vbtable"——虚基类表，通过偏移量找到唯一的数据
};

//驼类
class Tuo : virtual public Animal{
	//这里虚继承了"vbptr"——虚基类指针，通过偏移量找到唯一的数据
};

class SheepTuo : public Sheep, public Tuo{
	
};

void test01(){
	SheepTuo st;
	st.Sheep::m_Age = 18;
	st.Tuo::m_Age = 28;// 这里对应于将一个m_Age赋值两次
	// 菱形继承时，两个父类拥有相同数据，需要加作用域区分
	cout << "st.Sheep::m_Age = " << st.Sheep::m_Age << endl;
	cout << "st.Tuo::m_Age = " << st.Tuo::m_Age << endl;
	
	// 数据此时有两份，资源浪费——虚继承解决
	// 虚继承将m_Age改为共享数据
	cout << "st.m_Age = " << st.m_Age << endl;
}

int main(){
	
	test01();
	
	system("pause");
	return 0;
}
