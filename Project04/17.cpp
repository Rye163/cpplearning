#include<iostream>
using namespace std;

//4.1.2 struct和class区别

//在C++中 struct和class唯一的区别就在于 默认的访问权限不同
//区别：
//struct 默认权限为公共
//class   默认权限为私有

class C1{
	int m_A;//默认权限为 私有
};

struct C2{
	int m_A;//默认权限为 公共
};


int main(){
	
	C1 c1;
	//c1.m_A = 100;//类外不可访问，报错
	
	C2 c2;
	c2.m_A = 100;//类外可访问
	
	system("pause");
	return 0;
}
