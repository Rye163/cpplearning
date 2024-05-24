#include "point.h"



//设置获取X坐标
void Point::setX(int x){//Point作用域下的成员函数
	m_X = x;
}
int Point::getX(){
	return m_X;
}
//设置获取Y坐标
void Point::setY(int y){
	m_Y = y;
}
int Point::getY(){
	return m_Y;
}	
