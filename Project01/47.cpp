#include<iostream>
#include<string>
using namespace std;

//8.3 结构体数组
//作用：将自定义的结构体放入到数组中方便维护
//语法：struct  结构体名 数组名[元素个数] = {  {} , {} , ... {} }

//1.创建一个结构体
struct student{
	string name;
	int age;
	int score;
};

int main(){
	
	//2.创建结构体数组
	struct student stuArray[3] = {
		{"张三", 18, 80}, 
		{"李四", 19, 60}, 
		{"王五", 20, 70}
	};
	
	//3.给结构体数组中的元素赋值
	stuArray[2].name = "赵六";
	stuArray[2].age = 25;
	stuArray[2].score = 90;
	
	//4.遍历结构体数组 
	for(int i = 0; i < 3; i++){
		cout << "姓名：" << stuArray[i].name << "\t";
		cout << "年龄：" << stuArray[i].age << "\t";
		cout << "分数：" << stuArray[i].score << "\t";
		cout << endl;
	}
	
	
	system("pause");
	return 0;
}
