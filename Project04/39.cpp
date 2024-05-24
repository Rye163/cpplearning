#include<iostream>
using namespace std;

// 4.5.3 递增运算符重载

// 语法：++

//作用： 通过重载递增运算符，实现自己的整型数据递增

// 自定义整形
class MyInteger{
	
	// 左移运算符重载的友元函数
	friend ostream & operator<<(ostream& cout, MyInteger myint);
	
public:
	MyInteger(){
		m_Num = 0;
	}
	
	// 重载前置递增，返回引用是为了一直对一个数据进行递增操作（链式思想）
	MyInteger & operator++(){
		//先++运算
		++m_Num;
		//再返回自身
		return *this;
	}
	
	// 重载后置递增，返回值
	MyInteger operator++(int){//占位参数，可以用于区分前置/后置递增
		//先记录当前结果
		MyInteger  temp = * this;
		//后递增
		++m_Num;
		//再返回记录结果
		return temp;//局部对象函数运行结束之后被释放，如果返回引用非法
	}
	
private:
	int m_Num;
};

// 重载左运算符
ostream & operator<<(ostream& cout, MyInteger myint){
	cout << myint.m_Num;
	return cout;
}

void test01(){
	MyInteger myint;
	cout << ++myint << endl;
}

void test02(){
	MyInteger myint;
	cout << myint++ << endl;
	cout << myint << endl;

}

int main(){
	
	//test01();
	test02();
	
	system("pause");
	return 0;
}
