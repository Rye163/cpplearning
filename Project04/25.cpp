#include<iostream>
using namespace std;

//4.2.5 深拷贝与浅拷贝

//深浅拷贝是面试经典问题，也是常见的一个坑
//浅拷贝：简单的赋值拷贝操作
//深拷贝：在堆区重新申请空间，进行拷贝操作

//案例演示：
class Person{
public:

	Person(){
		cout << "Person默认构造函数调用" << endl;
	}
		
	Person (int age,int height){
		cout << "Person有参构造函数调用" << endl;
		m_Age = age;
		m_Height = new int(height);
	}
	
	//自己实现拷贝构造函数，解决浅拷贝带来的问题——堆区数据重复释放
	Person (const Person & p){
		cout << "Person拷贝构造函数调用" << endl;
		m_Age = p.m_Age;
		//直接写m_Height =p.m_Height;没有意义，编译器默认实现就是这行代码（浅拷贝）
		//深拷贝操作
		m_Height = new int(*p.m_Height);
	}
		
	~Person(){
		//析构函数，将堆区数据释放
        //注意前进后出
		cout << "Person析构函数调用" << endl;
		if(m_Height != NULL){
			delete m_Height;
			m_Height = NULL;//将指针置空，防止野指针出现
		}
		//浅拷贝出现问题：堆区内存重复释放——利用深拷贝解决 
	}

public:
	int m_Age;
	int * m_Height;// 指针原因：数据开辟到堆区
};

void test01(){
	Person p1(18, 180);
	
	cout << "\tp1的年龄为：" << p1.m_Age << "\tp1的身高为：" << *p1.m_Height << endl;
	
	Person p2(p1);
	//编译器提供的拷贝构造函数是浅拷贝（简单赋值）
	cout << "\tp2的年龄为：" << p2.m_Age << "\tp2的身高为：" << *p2.m_Height << endl;
	
}


int main(){
	
	test01();
	
	system("pause");
	return 0;
}
