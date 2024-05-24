#include<iostream>
using namespace std;

// 4.5.3 课后：递减运算符重载

// 语法：--

//作用： 通过重载递增运算符，实现自己的整型数据递增

class MyInteger{
	
	friend ostream & operator<<(ostream& count, MyInteger myint);
public:
	MyInteger(){
		
		m_Num = 0;
		
	}
	
	//前置递减重载
	MyInteger & operator--(){
		
		--m_Num;
		return *this;
		
	}
	
	// 后置递减重载
	MyInteger operator--(int){
		MyInteger temp;
		temp = *this;
		--m_Num;
		return temp;
	}
	
private:
	int m_Num;
};

ostream & operator<<(ostream& count, MyInteger myint){
	cout << myint.m_Num;
	return cout;
}

void test01(){
	MyInteger myint;
	cout << --myint << endl;
}

void test02(){
	MyInteger myint;
	cout << myint-- << endl;
	cout << myint << endl;
}

int main(){
	
	//test01();
	test02();
	
	system("pause");
	return 0;
}
