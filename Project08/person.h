#ifndef PERSON_H
#define PERSON_H

#endif

#pragma once// 防止头文件重复包含
#include<iostream>
using namespace std;

template<class T1, class T2>
class Person{
public:
	
	Person(T1 name, T2 age);
	
	void showPerson();
	
	T1 m_Name;
	T2 m_Age;
};
