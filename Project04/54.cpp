#include<iostream>
#include<string>
using namespace std;

// 4.7.2 多态案例一-计算器类
// 案例描述：分别利用普通写法和多态技术，设计实现两个操作数进行运算的计算器类

// 多态的优点：
// 代码组织结构清晰
// 可读性强
// 利于前期和后期的扩展以及维护

// 普通写法
class Calculator{
public:
	
	int getResult(string oper){
		if (oper == "+"){
			return m_Num1 + m_Num2;
		}
		else if (oper == "-"){
			return m_Num1 - m_Num2;
		}
		else if (oper == "*"){
			return m_Num1 * m_Num2;
		}
		else if (oper == "/"){
			return m_Num1 / m_Num2;
		}
		//如果要提供新的运算，需要修改源码
		//开发中 提倡 开闭原则：对扩展进行开放，对修改进行关闭
	}
	
	int m_Num1;
	int m_Num2;
};

void test01(){
	//创建计算器对象
	Calculator c;
	c.m_Num1 = 10;
	c.m_Num2 = 5;
	cout << c.m_Num1 << " + " << c.m_Num2 << " = " << c.getResult("+") << endl;
	cout << c.m_Num1 << " - " << c.m_Num2 << " = " << c.getResult("-") << endl;
	cout << c.m_Num1 << " * " << c.m_Num2 << " = " << c.getResult("*") << endl;
	cout << c.m_Num1 << " / " << c.m_Num2 << " = " << c.getResult("/") << endl;
}

// 利用多态实现计算器

// 实现计算器的抽象类
class AbstractCalculator{
public:
	
	virtual int getResult(){
		
		return 0;
		
	}
	
	int m_Num1;
	int m_Num2;
};

// 加法计算器
class AddCalculator : public AbstractCalculator{
public:
	virtual int getResult(){
		
		return m_Num1 + m_Num2;
		
	}
};

// 减法计算器
class SubCalculator : public AbstractCalculator{
public:
	virtual int getResult(){
		
		return m_Num1 - m_Num2;
		
	}
};

// 乘法法计算器
class MulCalculator : public AbstractCalculator{
public:
	virtual int getResult(){
		
		return m_Num1 * m_Num2;
		
	}
};

// 除法计算器
class DfCalculator : public AbstractCalculator{
public:
	virtual int getResult(){
		
		return m_Num1 / m_Num2;
		
	}
};

void test02(){
	// 多态使用
	// 父类引用或指针指向子类对象
	
	//加法
	AbstractCalculator *abc = new AddCalculator;// 创建堆区，记得销毁
	abc->m_Num1 = 10;
	abc->m_Num2 = 5;
	
	cout << abc->m_Num1 << " + " << abc->m_Num2 << " = " << abc->getResult() << endl;
	delete abc;
	
	//减法
	abc = new SubCalculator;// 创建堆区，记得销毁
	abc->m_Num1 = 10;
	abc->m_Num2 = 5;
	
	cout << abc->m_Num1 << " - " << abc->m_Num2 << " = " << abc->getResult() << endl;
	delete abc;
	
	//乘法
	abc = new MulCalculator;// 创建堆区，记得销毁
	abc->m_Num1 = 10;
	abc->m_Num2 = 5;
	
	cout << abc->m_Num1 << " * " << abc->m_Num2 << " = " << abc->getResult() << endl;
	delete abc;
	
	//除法
	abc = new DfCalculator;// 创建堆区，记得销毁
	abc->m_Num1 = 10;
	abc->m_Num2 = 5;
	
	cout << abc->m_Num1 << " / " << abc->m_Num2 << " = " << abc->getResult() << endl;
	delete abc;
}

int main(){
	
	//test01();
	test02();
	
	system("pause");
	return 0;
}
