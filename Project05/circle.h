#pragma once
#include<iostream>
using namespace std;
#include "point.h"//本文件包含了point.h中的类，需要加上头文件

class Circle{
	
public:
	//设置获取半径
	void setR(int r);
	
	int getR();
	
	//设置获取圆心
	void setCenter(Point center);
	
	Point getCenter();
	
private:
	int m_R;
	
	Point m_Center;//圆心，在类中可以让另一个类作为本类的成员
};
