#include<iostream>
using namespace std;

// 4.7.4 多态案例二-制作饮品

// 案例描述：
// 制作饮品的大致流程为：煮水 -  冲泡 - 倒入杯中 - 加入辅料

// 利用多态技术实现本案例，提供抽象制作饮品基类，提供子类制作咖啡和茶叶

class AbstractDrinking{
public:
	// 煮水
	virtual void Boil() = 0;
	// 冲泡
	virtual void Brew() = 0;
	// 倒入杯中
	virtual void PourInCup() = 0;
	// 加入辅料
	virtual void PutSomething() = 0;
	// 制作
	void makeDrink(){
		Boil();
		Brew();
		PourInCup();
		PutSomething();
	}
};

// 制作咖啡
class makeCoffee : public AbstractDrinking{
public:
	// 煮水
	virtual void Boil(){
		cout << "煮水" << endl;
	}
	// 冲泡
	virtual void Brew(){
		cout << "冲泡咖啡" << endl;
	}
	// 倒入杯中
	virtual void PourInCup(){
		cout << "倒入咖啡杯" << endl;
	}
	// 加入辅料
	virtual void PutSomething(){
		cout << "加入牛奶" << endl;
	}
};

//制作茶水
class makeTea : public AbstractDrinking{
public:
	// 煮水
	virtual void Boil(){
		cout << "煮水" << endl;
	}
	// 冲泡
	virtual void Brew(){
		cout << "冲泡茶叶" << endl;
	}
	// 倒入杯中
	virtual void PourInCup(){
		cout << "倒入茶杯" << endl;
	}
	// 加入辅料
	virtual void PutSomething(){
		cout << "加入枸杞" << endl;
	}
};

void doWork(AbstractDrinking * abs){
	abs->makeDrink();
	delete abs;//堆区扩展记得释放
}

void test01(){
	// 制作咖啡
	doWork(new makeCoffee);
	cout << "------------------" << endl;
	doWork(new makeTea);
}


int main(){
	
	test01();
	
	system("pause");
	return 0;
}
