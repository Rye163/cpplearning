#include "Addressbook.h"

//1.添加联系人
void addPerson(Addressbooks * abs){
	
	//判断通讯录是否已满，如果满了就不再添加
	if(abs->m_Size == MAX){
		cout << "通讯录已满，无法添加" << endl;
		return;
	}
	else{
		//添加具体联系人
		
		//姓名
		string name;
		cout << "请输入姓名：" << endl;
		cin >> name;
		abs->personArray[abs->m_Size].m_Name = name;
		
		//性别
		cout << "请输入性别：" << endl;
		cout << "1 -- 男" << endl;
		cout << "2 -- 女" << endl;
		
		int gender = 0;
		
		while(true){
			
			cin >> gender;
			
			if(gender == 1 || gender == 2){
				abs->personArray[abs->m_Size].m_Gender = gender;
				break;//输入1或2退出循环
			}
			else cout << "输入错误，请重新输入" << endl;//输入其他数字则重新输入
			
		}
		
		//年龄
		int age = 0;
		cout << "请输入年龄：" << endl;
		cin >> age;
		abs->personArray[abs->m_Size].m_Age = age; 
		
		//电话
		string phone;
		cout << "请输入电话：" << endl;
		cin >> phone;
		abs->personArray[abs->m_Size].m_Phone = phone; 
		
		//地址
		string addr;
		cout << "请输入家庭住址：" << endl;
		cin >> addr;
		abs->personArray[abs->m_Size].m_Addr = addr; 
		
		//更新通讯录人数
		abs->m_Size++;
		
		cout << "添加成功" << endl;
		system("pause");
		system("cls");//清屏指令
		
	}
	
}

//2.显示联系人
void showPerson(Addressbooks *abs){
	
	//判断通讯录中人数是否为0
	if(abs->m_Size == 0){
		
		cout << "当前记录为空" << endl;
	}
	else{
		
		for(int i = 0; i < abs->m_Size; i++){
			
			cout << "姓名：" << abs->personArray[i].m_Name << "\t";//水平制表符（8字节）
			cout << "性别：" << (abs->personArray[i].m_Gender == 1 ? "男" : "女") << "\t";//三目运算符
			cout << "年龄：" << abs->personArray[i].m_Age << "\t";
			cout << "电话：" << abs->personArray[i].m_Phone << "\t";
			cout << "住址：" << abs->personArray[i].m_Addr << endl;
			
		}
		
	}
	
	system("pause");//按任意键继续
	system("cls");//清屏
	
}

//3.删除联系人
//3.1.封装检测联系人是否存在函数
//检测联系人是否存在——如果存在，返回联系人在通讯录中的位置，不存在返回-1
//参数1：通讯录；参数2：对比人名
int isExist(Addressbooks * abs, string name){
	
	for(int i = 0; i < abs->m_Size; i++){
		
		//找到用户输入姓名
		if(abs->personArray[i].m_Name == name){
			
			return i;//返回此人在数组中的下标编号
			
		}
		
	}
	
	return -1;
	
}

//3.2.封装删除联系人函数
//根据用户输入的联系人判断该通讯录中是否有此人
//查找到进行删除，并提示删除成功
//查不到提示查无此人。
void deletPerson(Addressbooks * abs){
	
	cout << "请输入删除联系人的姓名：" << endl;
	
	string name;//jump to case label由于变量作用于不明确而报错
	cin >> name;
	
	int ret = isExist(abs,name);
	if(ret != -1){
		
		//3.2.1将isExist输出的下标之后的数据向前移动
		for(int i = ret; i < abs->m_Size; i++){
			
			abs->personArray[i] = abs->personArray[i + 1];
			
		}
		
		//3.2.2通讯录中记录的人员个数减1
		abs->m_Size--;
		
		cout <<"删除成功" << endl;
		
	}
	else{
		cout << "查无此人" << endl;
	}
	
	system("pause");
	system("cls");
}

//4.查找联系人
// 4.1 封装查找联系人函数
void findPerson(Addressbooks * abs){
	
	cout << "请输入您要查找的联系人：" << endl;
	string name;
	cin >> name;
	
	int ret = isExist(abs, name);
	if( ret != -1){
		cout << "姓名：" << abs->personArray[ret].m_Name << "\t";
		cout << "性别：" << abs->personArray[ret].m_Gender << "\t";
		cout << "年龄：" << abs->personArray[ret].m_Age << "\t";
		cout << "电话：" << abs->personArray[ret].m_Phone << "\t";
		cout << "住址：" << abs->personArray[ret].m_Addr << endl;
	}
	else{
		cout << "查无此人" << endl;
	}
	
	system("pause");
	system("cls");
}

//5.修改联系人
void modifyPerson(Addressbooks * abs){
	cout <<"请输入您要修改的联系人：" << endl;
	string name;
	cin >> name;
	
	int ret = isExist(abs, name);
	if(ret != -1){
		string name;
		cout << "请输入姓名：" << endl;
		cin >> name;
		abs->personArray[ret].m_Name = name;
		
		//性别
		cout << "请输入性别：" << endl;
		cout << "1 -- 男" << endl;
		cout << "2 -- 女" << endl;
		
		int gender = 0;
		
		while(true){
			
			cin >> gender;
			
			if(gender == 1 || gender == 2){
				abs->personArray[ret].m_Gender = gender;
				break;//输入1或2退出循环
			}
			else cout << "输入错误，请重新输入" << endl;//输入其他数字则重新输入
			
		}
		
		//年龄
		int age = 0;
		cout << "请输入年龄：" << endl;
		cin >> age;
		abs->personArray[ret].m_Age = age; 
		
		//电话
		string phone;
		cout << "请输入电话：" << endl;
		cin >> phone;
		abs->personArray[ret].m_Phone = phone; 
		
		//地址
		string addr;
		cout << "请输入家庭住址：" << endl;
		cin >> addr;
		abs->personArray[ret].m_Addr = addr;
		
		cout << "修改成功" << endl;
	}
	else{
		cout << "查无此人" << endl;
	}
	
	system("pause");
	system("cls");
}

//6.清空联系人
void cleanPerson(Addressbooks * abs){
	
	abs->m_Size = 0;
	cout << "通讯录已清空" << endl;
	
	system("pause");
	system("cls");
}

//菜单界面
void showMenu(){
	
	cout << "***************************" << endl;
	cout << "*****  1、添加联系人  *****" << endl;
	cout << "*****  2、显示联系人  *****" << endl;
	cout << "*****  3、删除联系人  *****" << endl;
	cout << "*****  4、查找联系人  *****" << endl;
	cout << "*****  5、修改联系人  *****" << endl;
	cout << "*****  6、清空联系人  *****" << endl;
	cout << "*****  0、退出通讯录  *****" << endl;
	cout << "***************************" << endl;
	
}
