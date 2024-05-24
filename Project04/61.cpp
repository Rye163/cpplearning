#include<iostream>
#include<fstream>
using namespace std;

// 5.2.1 写文件

// 二进制方式写文件主要利用流对象调用成员函数write

// 函数原型 ：`ostream& write(const char * buffer,int len);`

// 参数解释：字符指针buffer指向内存中一段存储空间。len是读写的字节数

class Person{
public:
	char m_Name[64];
	int m_Age;
};

void test01(){
	//2.
	ofstream ofs("text02.txt", ios::out | ios::binary);
	//3.
	//ofs.open("text02.txt", ios::out | ios::binary);
	//4.
	Person p = {"张三", 18};
	ofs.write((const char *) &p, sizeof(Person));
	//5.
	ofs.close();
	
}

int main(){
	
	test01();
	
	system("pause");
	return 0;
}
