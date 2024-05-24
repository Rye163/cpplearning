#include<iostream>
#include<fstream>
using namespace std;

//  5.2.2 读文件
// 二进制方式读文件主要利用流对象调用成员函数read

// 函数原型：`istream& read(char *buffer,int len);`

// 参数解释：字符指针buffer指向内存中一段存储空间。len是读写的字节数

class Person{
public:
	char m_Name[64];
	int m_Age;
};

void test01(){
	// 2.
	ifstream ifs;
	// 3.1 
	ifs.open("text02.txt", ios::in | ios::binary);
	// 3.2
	if (!ifs.is_open()){
		cout << "文件打开失败" << endl;
	}
	// 4. 
	Person p;
	ifs.read((char*)  &p, sizeof(Person));
	cout << p.m_Name << p.m_Age << endl;
	// 5.
	ifs.close();
}

int main(){
	
	test01();
	
	system("pause");
	return 0;
}
