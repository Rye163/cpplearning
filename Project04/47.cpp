#include<iostream>
using namespace std;

//4.6.3 继承的对象模型
//问题：从父类继承过来的成员，哪些属于子类对象中？

class Base{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son : public Base{
public:
	int m_D;
	
};

void test01(){
	Son son;
	// sizeof(son) = 16;表示Base中的全部非静态成员属性全部被继承，还包括自身的属性
	// 父类中的私有属性是被编译器隐藏了，无法访问但会被继承
	cout << "sizeof(son) = " << sizeof(son) << endl;
}


int main(){
	
	test01();
	
	system("pause");
	
	return 0;
}
