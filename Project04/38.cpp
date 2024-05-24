#include<iostream>
using namespace std;

// 4.5.2 左移运算符重载

//作用：可以输出自定义数据类型

class Person {
	
	// 1. 成员函数重载左移运算符
//	void operator<<(cout){
//		//test01()调用此函数时本质为：p.operator<<(cout)，因此形参写为(cout)
//		//这样写输出为：p << cout，无法实现cout在左侧的效果
//		//因此一般不使用成员函数重载
//	}
	
	// 改为私有属性后，采用友元
	friend ostream & operator<<(ostream &out, Person &p);
	
public:
	Person(int a, int b){
		m_A = a;
		m_B = b;
	}
	
private:
	
	int m_A;
	int m_B;
};

// 全局函数重载
// 1.写法一
//void operator<<(ostream &cout, Person &p){// ostream是一个类，cout 是 ostream 类的一个对象，引用传入
//	cout << "p.m_A = " << p.m_A << " p.m_B = " << p.m_B;
//}

// 2.写法二（优化写法）
// 这里的"&"是表示链式调用的意思
ostream & operator<<(ostream &out, Person &p){//配合返回值cout，返回类型改为ostream
	out << "p.m_A = " << p.m_A << " p.m_B = " << p.m_B;
	return out;// 与test01()函数中的endl换行配合，此时return cout实际上等价于"<<"——链式编程思想
	//注意这里将cout改为out——引用起别名的作用，&out = cout
}

void test01(){
	Person p(10,10);
	
//	p.m_A = 10;
//	p.m_B = 10;
	
	//cout << p;// 追踪cout定义：extern ostream cout;用于向标准输出（通常是屏幕）输出信息
	cout << p << endl;
}

int main(){
	
	test01();
	
	system("pause");
	return 0;
}
