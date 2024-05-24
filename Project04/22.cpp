#include<iostream>
using namespace std;

// 4.2.2 构造函数的分类及调用

//1、构造函数分类
// 按照参数分类分为 有参和无参构造   无参又称为默认构造函数
// 按照类型分类分为 普通构造和拷贝构造

//2、构造函数的调用
//括号法
//显示法
//隐式转换法


class Person{
public:
	
	//普通构造
	Person(){//无参构造（默认构造）
		cout << "Person的无参构造函数调用" << endl;
	}
	Person(int a){//有参构造
		age = a;
		cout << "Person的有参构造函数调用" << endl;
	}
	
	//拷贝构造函数
	Person(const Person& p){//常量引用主要用来修饰形参，防止误操作
		age = p.age;//将传入的人身上的所有属性拷贝到我身上
			cout << "Person的拷贝构造函数调用" << endl;
	}
	
	~Person(){
		cout << "Person的析构函数调用" << endl;
	}
	
	int age;
};

void test01(){
	//1.括号法
//	Person p1;//默认构造函数的调用
//	Person p2(10);//有参构造函数调用
//	Person p3(p2);//拷贝构造函数调用
//	
//	cout << "p2的年龄：" << p2.age << endl;
//	cout << "p3的年龄：" << p3.age << endl;//拷贝构造函数
	
	//注意事项
	//调用默认构造函数，不要加()
	//Person p1();——返回值 函数名();
    //编译器会认为这是一个函数的声明——void func();
	
	//2.显式法
	Person p1;
	Person p2 = Person (10);
	Person p3 = Person (p2);
	
	//注意事项1
	Person(10);
	//首先为有参构造函数调用，之后为匿名对象
    //特点：当前行结束后，马上析构
	cout << "匿名对象构造函数的调用" << endl;//在匿名对象析构结束后才打印
	//Person(10)单独写就是匿名对象，当前行结束后，马上析构
	
	//注意事项2
	//不要利用拷贝构造函数 初始化匿名对象
	//Person(p3);//编译器会认为Person(p3) == Person p3;对象声明
	
	//隐式转换法
	Person p4 = 10;//相当于Person p4 = Person (10); 有参构造
	Person p5 = p4;//相当于Person p5 = Person (p4);
}

int main(){
	
	test01();
	
	system("pause");
	return 0;
}
