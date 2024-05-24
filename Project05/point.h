#pragma once//防止头文件重复包含
#include<iostream>

using namespace std;

class Point{
public:
	//设置获取X坐标
	void setX(int x);

	int getX();
	
	//设置获取Y坐标
	void setY(int y);
	
	int getY();
	
private:
	int m_X;
	int m_Y;
};
//只留函数声明与变量声明
