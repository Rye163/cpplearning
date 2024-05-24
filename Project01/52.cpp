#include<iostream>
#include<string>
#include<ctime>//随机数注意头文件
using namespace std;

//8.8.1 案例1
//案例描述：
//学校正在做毕设项目，每名老师带领5个学生，总共有3名老师，需求如下
//设计学生和老师的结构体，其中在老师的结构体中，有老师姓名和一个存放5名学生的数组作为成员
//学生的成员有姓名、考试分数，创建数组存放3名老师，通过函数给每个老师及所带的学生赋值
//最终打印出老师数据以及老师所带的学生数据。

//创建学生结构体
struct Student{
	
	string sName;
	int score;
	
};

//创建教师结构体
struct Teacher{
	
	string tName;//教师姓名
	struct Student sArray[5];//学生数组
	
};

//给老师和学生赋值的函数
void allocateSpace(struct Teacher tArray[], int len){//allocateSpace——开辟空间并赋值
	
	string nameSeed = "ABCDE";
	//给教师开始赋值
	for(int i = 0; i < len; i++){
		tArray[i].tName = "Teacher_";
		tArray[i].tName += nameSeed[i];
		
		//通过循环给每名老师带的学生赋值
		for(int j = 0; j < 5; j++){
			tArray[i].sArray[j].sName = "Student_";
			tArray[i].sArray[j].sName += nameSeed[j];
			
			int random = rand() % 61 + 40;//随机数为40~100
			tArray[i].sArray[j].score = random;
		}
	}
	
}

//打印所有老师及所带的学生信息的函数
void printInfo(struct Teacher tArray[], int len){
	
	for(int i = 0; i < len; i++){
		cout << "教师姓名：" << tArray[i].tName << endl;
		cout << "教师对应学生信息如下：" << endl;
		
		//通过循环打印每名老师带的学生信息
		for(int j = 0; j < 5; j++){
			cout << "\t学生姓名：" << tArray[i].sArray[j].sName << 
			" 考试分数：" << tArray[i].sArray[j].score << endl;
		}
		cout << endl;
	}
	
}


int main(){
	
	//随机数种子
	srand((unsigned int)time(NULL));
	
	//1.创建3名教师的数组
	struct Teacher tArray[3];
	
	//2.通过函数给3名教师的信息赋值，并给老师带的学生赋值
	int len = sizeof(tArray) / sizeof(tArray[0]);
	allocateSpace(tArray, len);//地址传递
	
	//3.打印所有老师及所带的学生信息
	printInfo(tArray, len);
	
	system("pause");
	return 0;
}
