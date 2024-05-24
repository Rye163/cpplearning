#include<iostream>
using namespace std;

//练习案例2：点和圆的关系
//设计一个圆形类（Circle），和一个点类（Point），计算点和圆的关系。
//project05分文件编写

class Point{
public:
	//设置获取X坐标
	void setX(int x){
		m_X = x;
	}
	int getX(){
		return m_X;
	}
	//设置获取Y坐标
	void setY(int y){
		m_Y = y;
	}
	int getY(){
		return m_Y;
	}
	
private:
	int m_X;
	int m_Y;
};

class Circle{
	
public:
	//设置获取半径
	void setR(int r){
		m_R = r;
	}
	int getR(){
		return m_R;
	}
	//设置获取圆心
	void setCenter(Point center){
		m_Center = center;
	}
	Point getCenter(){
		return m_Center;
	}
	
private:
	int m_R;
	
	Point m_Center;//圆心，在类中可以让另一个类作为本类的成员
};
//
void isInCircle(Circle &c, Point &p){
	
//计算两点之间距离的平方
	int distance = 
	(c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) + 
	(c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());
	
    //计算半径的平方
	int rdistance = c.getR() * c.getR();
	
    //判断关系
	if(distance == rdistance){
		cout << "点在圆上" << endl;
	}
	else if(distance > rdistance){
		cout << "点在圆外" << endl;
	}
	else cout << "点在圆内" << endl;
	
}

int main(){
	
	//创建一个圆
	Circle c;
	c.setR(10);
	Point center;
	center.setX(10);
	center.setY(0);
	c.setCenter(center);
	
	//创建一个点
	Point p;
	p.setX(10);
	p.setY(9);
	
	//判断关系
	isInCircle(c, p);
	
	system("pause");
	return 0;
}
