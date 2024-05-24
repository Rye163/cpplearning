#include<iostream>
using namespace std;

//封装意义二：
//类在设计时，可以把属性和行为放在不同的权限下，加以控制

//访问权限有三种：
//1. public      公共权限    成员 类内可以访问  类外可以访问
//2. protected   保护权限    成员 类内可以访问  类外不可以访问(儿子可以访问父亲中的保护内容)
//3. private     私有权限    成员 类内可以访问  类外不可以访问(儿子不可以访问父亲中的私有内容)

class Person{
	
	//公共权限
public:
	string m_Name;//姓名
	
	//保护权限
protected:
	string m_Car;//汽车
	
	//私有权限
private:
	int m_Password;//银行卡密码
	
public://改为protected或者private不影响函数类内访问，但影响函数类外访问
	void func(){
		m_Name = "张三";
		m_Car = "拖拉机";
		m_Password = 110;
	}
	
};

int main(){
	
	//实例化一个具体的对象
	Person p1;
	
	p1.m_Name = "李四";
	//p1.m_Car = "奔驰";//保护权限内容，在类外无法访问
	//p1.m_Password = 111;//私有权限内容，在类外无法访问
	
	
	system("pause");
	return 0;
}
