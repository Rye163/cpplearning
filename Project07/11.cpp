#include<iostream>
using namespace std;

// 1.3.5 类模板与继承

// 当类模板碰到继承时，需要注意一下几点：
// 1. 当子类继承的父类是一个类模板时，子类在声明的时候，要指定出父类中T的类型
// 2. 如果不指定，编译器无法给子类分配内存
// 3. 如果想灵活指定出父类中T的类型，子类也需变为类模板

template<class T>
class Base{
public:
	
	T m;
};

//class Son : public Base{//错误，必须知道父类中的数据类型
class Son : public Base<int>{
public:
	
};

void test01(){
	Son s1;
}

//如果想灵活指定出父类中T的类型，子类也需变为类模板
template<class T1, class T2>
class Son2 : public Base<T2>{
public:
	Son2(){
		cout << "T1的数据类型为："  << typeid(T1).name() << endl;
		cout << "T2的数据类型为："  << typeid(T2).name() << endl;
	}
	T1 obj;
};

void test02(){
	Son2<int, char> s2;//int 给子类的obj，char 给父类的 m
}

int main(){
	
	test01();
	test02();
	
	system("pause");
	
	return 0;
}
