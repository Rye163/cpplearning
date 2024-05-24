#include<iostream>
using namespace std;

//4.6.1 继承的基本语法
//继承实现
//语法：class 子类 : 继承方式 父类
//子类 也称为 派生类
//父类 也称为 基类

//公共页面
class BasePage{
public:
	void header(){
		cout << "公共头部" << endl;
	}
	void footer(){
		cout << "公共底部" << endl;
	}
	void left(){
		cout << "公共分类列表" << endl;
	}

};

//Java页面
class Java:public BasePage{
public:
	void content(){
		cout << "Java学科视频" << endl;
	}
};

class Python:public BasePage{
public:
	void content(){
		cout << "Python 学科视频" << endl;
	}
};

class Cpp:public BasePage{
public:
	void content(){
		cout << "Cpp学科视频" << endl;
	}
};

void test01(){
	//Java页面
	cout << "Java下载视频页面如下：" << endl;
	Java java;
	java.header();
	java.footer();
	java.left();
	java.content();
	cout << "--------------------" << endl;
	
	//Python页面
	cout << "Python下载视频页面如下： " << endl;
	Python py;
	py.header();
	py.footer();
	py.left();
	py.content();
	cout << "--------------------" << endl;
	
	//C++页面
	cout << "C++下载视频页面如下： " << endl;
	Cpp cp;
	cp.header();
	cp.footer();
	cp.left();
	cp.content();
}

int main(){
	
	test01();
	
	system("pause");
	
	return 0;
}
