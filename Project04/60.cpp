#include<iostream>
#include<string>
#include<fstream>// 1. 包含头文件
using namespace std;

// 5.1.2读文件

// 读文件与写文件步骤相似，但是读取方式相对于比较多

// 读文件步骤如下：
// 1. 包含头文件                     #include <fstream>
// 2. 创建流对象                     ifstream ifs;
// 3. 打开文件并判断文件是否打开成功 ifs.open("文件路径",打开方式);
// 4. 读数据                         四种方式读取
// 5. 关闭文件                       ifs.close();

void test01(){
	// 2. 创建流对象
	ifstream ifs;
	
	// 3.1 打开文件
	ifs.open("text01.txt", ios::in);
	// 3.2 判断文件是否打开成功
	if(!ifs.is_open()){// is_open函数判断
		cout << "文件打开失败" << endl;
		return;
	}
	
	// 4. 读数据
	// 4.1
//	char buf[1024] = {0};
//	while(ifs >> buf){
//		cout << buf <<endl;
//	}
	// 4.2
//	char buf[1024] = {0};
//	while(ifs.getline(buf,sizeof(buf))){// ifs.getline(字符数组名，数组长度);
//		cout << buf << endl;
//	}
	// 4.3
//	string buf;
//	while(getline(ifs, buf)){//全局函数 getline(输入流对象，字符串)
//		cout << buf << endl;
//	}
	// 4.4 不推荐使用
	char c;
	while((c = ifs.get()) != EOF){// EOF end of file
		cout << c;// 不能加endl
	}
	
	// 5. 关闭文件
	ifs.close();
}

int main(){
	
	test01();
	
	system("pause");
	return 0;
}
