#include<iostream>
using namespace std;

//4.6.1 继承的基本语法
//继承方式
//继承方式一共有三种：
//共同点：
//公共继承
//保护继承
//私有继承

//公共继承
class Base1{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son1:public Base1{
public:
	void func(){
		m_A = 10;//可访问 public权限
		m_B = 20;//可访问 protected权限
		//m_C = 10;//父类中私有权限成员，子类不可访问
	}
};

void test01(){
	Son1 s1;
	s1.m_A = 100;
	//s1.m_B = 100;//到Son1中m_B是保护权限
}

//保护继承
class Base2{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};
class Son2 :protected Base2{
public:
	void func(){
		m_A = 10;//可访问 public权限，并改为protected权限
		m_B = 20;//可访问 protected权限
		//m_C = 10;//父类中私有权限成员，子类不可访问
	}
};

void test02(){
	Son2 s2;
	//s2.m_A = 100;
	//s2.m_B = 100;
}

//私有继承
class Base3{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};
class Son3 :private Base3{
public:
	void func(){
		m_A = 10;//可访问 public权限，并改为private权限
		m_B = 20;//可访问 protected权限，并改为private权限
		//m_C = 10;//父类中私有权限成员，子类不可访问
	}
};

void test03(){
	Son2 s3;
	//s2.m_A = 100;
	//s2.m_B = 100;
}

class GrandSon3:public Son3{
public:
	void func(){
		//m_A = 1000;m_A在Son3中为私有，即使是子类也无法访问
	}
};

int main(){
	
	test01();
	test02();
	test03();
	
	system("pause");
	
	return 0;
}
