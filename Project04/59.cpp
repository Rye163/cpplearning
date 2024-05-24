#include<iostream>
#include<fstream>// 1. 包含头文件

using namespace std;

// 5.1.1写文件

// 写文件步骤如下：
// 1. 包含头文件   #include <fstream>
// 2. 创建流对象   ofstream ofs;
// 3. 打开文件     ofs.open("文件路径",打开方式);
// 4. 写数据       ofs << "写入的数据";
// 5. 关闭文件     ofs.close();

void test01(){
	// 2. 创建输出流
	ofstream ofs;
	
	// 3. 指定打开方式
	ofs.open("text01.txt", ios::trunc);
	
	// 4. 写数据
	ofs << "\t姓名：张三" << "\t性别：男" << "\t年龄：18" << endl;
	ofs << "\t姓名：李四" << "\t性别：男" << "\t年龄：20" << endl;
	
	// 5. 关闭文件
	ofs.close();
}

int main(){
	
	test01();
	
	system("pause");
	return 0;
}
