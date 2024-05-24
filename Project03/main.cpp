#include "Addressbook.h"

int main(){
	
	//创建通讯录结构体变量
	Addressbooks abs;
	//初始化通讯录中当前人员个数
	abs.m_Size = 0;
	
	int select = 0;// 创建用户选择输入的变量
	
	while(true){
		//菜单调用
		showMenu();
		
		cin >> select;
		
		switch(select){//选择switch分支结构，将整个架构进行搭建
			
		case 1://1、添加联系人
			
			addPerson(&abs);//利用地址传递，可以修饰实参
			
			break;
			
		case 2://2、显示联系人
		    
			showPerson(&abs);
			
			break;
			
		case 3://3、删除联系人
//测试代码相关内容
//		{//防止switch由于case代码过长报错，加入{}形成代码块
//			cout << "请输入删除联系人的姓名：" << endl;
//			string name;//jump to case label由于变量作用于不明确而报错
//			cin >> name;
//			
//			if(isExist(&abs, name) == -1){
//				cout <<"查无此人" << endl;
//			}
//			else{
//				cout << "找到此人" << endl;
//			}
//			
//		}	
			deletPerson(&abs);
			
			break;
			
		case 4://4、查找联系人
			
			findPerson(&abs);
			
			break;
		case 5://5、修改联系人
			
			modifyPerson(&abs);
			
			break;
		case 6://6、清空联系人
			
			cleanPerson(&abs);
			
			break;
		case 0://0、退出通讯录
			cout << "欢迎下次使用" << endl;
			system("pause");
			return 0;
			break;
		default:
			break;
		}
	}
	
	system("pause");
	return 0;
}
