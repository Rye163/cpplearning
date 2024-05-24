#include<iostream>
using namespace std;

//练习案例1：设计立方体类
//设计立方体类(Cube)
//1.求出立方体的面积和体积
//2.分别用全局函数和成员函数判断两个立方体是否相等。

//立方体类设计
//1.创建立方体类
//2.设计属性
//3.设计行为，获得立方体面积与体积
class Cube{
	
public:
	
	//设置获取长宽高
	void setL(int l){
		m_L = l;
	}
	int getL(){
		return m_L;
	}
	
	void setW(int w){
		m_W = w;
	}
	int getW(){
		return m_W;
	}
	
	void setH(int h){
		m_H = h;
	}
	int getH(){
		return m_H;
	}
	
	//获取立方体面积
	int calculateS(){
		return 2*m_L*m_W + 2*m_L*m_H + 2*m_W*m_H;
	}
	
	//获取立方体体积
	int calculateV(){
		return m_L * m_W * m_H;
	}
	
	//2.2利用成员函数判断两个立方体是否相等。
	bool isSameByClass(Cube &c){//成员函数只需要传入一个参数
		if(m_L == c.getL() && m_W == c.getW() && m_H == c.getH()){
			return true;
		}
		else return false;
	}
	
private:
	
	//属性
	int m_L;//长
	int m_W;//宽
	int m_H;//高
	
};

//2.分别用全局函数和成员函数判断两个立方体是否相等。
//2.1利用全局函数判断
bool isSame(Cube &c1, Cube &c2){
	if(c1.getL() == c2.getL() && c1.getW() == c2.getW() && c1.getH() == c2.getH()){
		return true;
	}
	else return false;
}

int main(){
	
	//创建立方体对象
	Cube c1;
	c1.setL(10);
	c1.setW(10);
	c1.setH(10);
	
	cout << "c1的面积为：" << c1.calculateS() << endl;
	cout << "c1的体积为：" << c1.calculateV() << endl;
	
	//创建第二个立方体
	Cube c2;
	c2.setL(10);
	c2.setW(10);
	c2.setH(11);
	
	//全局函数判断
	bool ret = isSame(c1, c2);
	if(ret ==true){
		cout << "c1与c2相等。" << endl;
	}
	else cout << "c1与c2不相等。" << endl;
	
	//成员函数判断
	ret = c1.isSameByClass(c2);
	if(ret ==true){
		cout << "成员函数判断c1与c2相等。" << endl;
	}
	else cout << "成员函数判断c1与c2不相等。" << endl;
	
	system("pause");
	return 0;
}
