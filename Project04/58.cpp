#include<iostream>
using namespace std;

//**案例描述：**

//电脑主要组成部件为 CPU（用于计算），显卡（用于显示），内存条（用于存储）
//将每个零件封装出抽象基类，并且提供不同的厂商生产不同的零件，例如Intel厂商和Lenovo厂商
//创建电脑类提供让电脑工作的函数，并且调用每个零件工作的接口
//测试时组装三台不同的电脑进行工作

//CPU类
class CPU{
public:
	//抽象计算函数
	virtual void calculate() = 0;
};

//显卡
class VideoCard{
public:
	//抽象显示函数
	virtual void display() = 0;
};

//内存条
class Memory{
public:
	//抽象存储函数
	virtual void storage() = 0;
};

// 具体零件厂商
// Intel厂
// IntelCPU类
class IntelCPU : public CPU{
public:
	virtual void calculate(){
		cout << "Intel的CPU开始工作了" << endl;
	}
};

// IntelVideoCard类
class IntelVideoCard : public VideoCard{
public:
	virtual void display(){
		cout << "Intel的VideoCard开始工作了" << endl;
	}
};

// IntelMemory类
class IntelMemory : public Memory{
public:
	virtual void storage(){
		cout << "Intel的Memory开始工作了" << endl;
	}
};

// Lenovo厂
// LenovoCPU类
class LenovoCPU : public CPU{
public:
	virtual void calculate(){
		cout << "Lenovo的CPU开始工作了" << endl;
	}
};

// LenovoVideoCard类
class LenovoVideoCard : public VideoCard{
public:
	virtual void display(){
		cout << "Lenovo的VideoCard开始工作了" << endl;
	}
};

class LenovoMemory : public Memory{
public:
	virtual void storage(){
		cout << "Lenovo的Memory开始工作了" << endl;
	}
};

//电脑类
class Computer{
public:
	//构造函数传入三个零件指针
	Computer(CPU * cpu, VideoCard * vc, Memory * memo){
		cout << "Computer构造函数调用" << endl;
		
		m_cpu = cpu;
		m_vc = vc;
		m_memo = memo;
	}
	
	//提供工作的函数
	void work(){
		m_cpu->calculate();
		m_vc->display();
		m_memo->storage();
	}
	
	// 提供析构函数 释放3个电脑零件；
	~Computer(){
		cout << "Computer析构函数调用" << endl;
		if (m_cpu != NULL){
			delete m_cpu;
			m_cpu = NULL;
		}
		if (m_vc != NULL){
			delete m_vc;
			m_vc = NULL;
		}
		if (m_memo != NULL){
			delete m_memo;
			m_memo = NULL;
		}
	}
	
private:
	CPU * m_cpu;
	VideoCard * m_vc;
	Memory * m_memo;
};

void test01(){
	
	// 第一台电脑的零件
	CPU * cpu = new IntelCPU;
	VideoCard * vc = new IntelVideoCard;
	Memory * memo = new IntelMemory;
	
	// 创建第一台电脑
	Computer * c1 = new Computer(cpu, vc, memo);
	c1->work();
	delete c1;
	cout << "---------------------" << endl;
	
	// 第二台电脑的零件
	cpu = new LenovoCPU;
	vc = new LenovoVideoCard;
	memo = new LenovoMemory;
	
	// 创建第二台电脑
	Computer * c2 = new Computer(cpu, vc, memo);
	c2->work();
	delete c2;
	cout << "---------------------" << endl;
	
	// 第三台电脑的零件
	cpu = new IntelCPU;
	vc = new LenovoVideoCard;
	memo = new IntelMemory;
	
	// 创建第三台电脑
	Computer * c3 = new Computer(cpu, vc, memo);
	c3->work();
	delete c3;
	cout << "---------------------" << endl;
}

int main(){
	
	test01();
	
	system("pause");
	return 0;
}
