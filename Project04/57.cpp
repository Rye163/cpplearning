#include<iostream>
using namespace std;

// 4.7.5 虚析构和纯虚析构

// 多态使用时，如果子类中有属性开辟到堆区，那么父类指针在释放时无法调用到子类的析构代码

// 解决方式：将父类中的析构函数改为**虚析构**或者**纯虚析构**

// 虚析构和纯虚析构共性：
// 1. 可以解决父类指针释放子类对象
// 2. 都需要有具体的函数实现

// 虚析构和纯虚析构区别：
// 如果是纯虚析构，该类属于抽象类，无法实例化对象

// 虚析构语法：virtual ~类名(){}

//纯虚析构语法：
//声明：         virtual ~类名() = 0;`
//具体代码实现： 类名::~类名(){}`

class Animal{
public:
	Animal(){
		cout << "Animal构造函数调用" << endl;
	}
	
	virtual void speak() = 0;
	
	// 析构函数加上virtual关键字，变成虚析构函数，解决父类指针释放子类对象释放不干净的问题
//	virtual ~Animal(){
//		cout << "Animal虚析构函数调用" << endl;
//	}
	
	// 纯虚析构——需要生命
	// 纯虚析构，该类属于抽象类，无法实例化对象
	virtual ~Animal() = 0;
};

// 对于纯虚析构需要具体代码实现
Animal::~Animal(){
	cout << "Animal纯虚析构函数调用" << endl;
}

class Cat : public Animal{
public:
	
	Cat(string name){
		cout << "Cat构造函数调用" << endl;
		m_Name = new string(name);
	}
	
	virtual void speak(){
		cout << *m_Name << "小猫在说话" << endl;
	}
	
	~Cat(){
		if (m_Name != NULL){
			cout << "Cat析构函数调用" << endl;
			delete m_Name;
			m_Name = NULL;
		}
	}
	
	string * m_Name;
};

void test01(){
	Animal * ani = new Cat("Tom");
	ani->speak();
	// 父类指针在析构时 不会调用子类的析构函数 导致子类对象可能清理不干净，造成内存泄漏
	// 解决方法：给基类增加一个虚析构函数
	//虚析构函数就是用来解决通过父类指针释放子类对象
	delete ani;
}

//总结：
//
//​	1. 虚析构或纯虚析构就是用来解决通过父类指针释放子类对象
//
//​	2. 如果子类中没有堆区数据，可以不写为虚析构或纯虚析构
//
//​	3. 拥有纯虚析构函数的类也属于抽象类



int main(){
	
	test01();
	
	system("pause");
	return 0;
}
