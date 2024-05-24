#include<iostream>
#include<string>
using namespace std;

//4.1.3 成员属性设置为私有

//优点1：将所有成员属性设置为私有，可以自己控制读写权限

//优点2：对于写权限，我们可以检测数据的有效性

class Person{
	
public:
	
	//写姓名（设置姓名）
	void setName(string name){
		m_Name = name;
	}
	//读姓名（获取姓名）
	string getName(){
		return m_Name;
	}
	
//	//获取年龄
//	int getAge(){
//		m_Age = 0;//年龄初始化为0岁
//		return m_Age;
//	}
	
	//修改条件：年龄可读可写，如要修改，年龄范围必须是0~100之间
	void setAge(int age){
		
		if(age < 0 || age > 100){
			m_Age = 0;
			cout << "输入年龄有误" << endl;
			return;
		}
		m_Age = age;
	}
	
	int getAge(){
		return m_Age;
	}
	
	//设置情人
	void setLover(string lover){
		m_Lover = lover;
	}
	
private:
	
	//姓名 可读可写
	string m_Name;
	//年龄 只读权限
	int m_Age;
	//情人 只写权限
	string m_Lover;
	
	
};

int main(){
	
	Person p1;
	p1.setName("张三");
	
	cout << "姓名为：" << p1.getName() << endl;
	
	//p1.m_Age = 18;
	//p1.setAge(18);//只读状态不可修改
	
	//条件修改后：
	p1.setAge(1000);
	cout << "年龄为：" << p1.getAge() << endl;
	
	p1.setLover("李四");
	//cout << "情人为：" << p1.getLover() << endl;
	//cout << "情人为：" << p1.m_Lover() << endl;
	//只写不可读
	
	system("pause");
	return 0;
}
