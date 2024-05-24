#include<iostream>
#include<string>

using namespace std;

int main(){
	
	//1.创建bool数据类型
	bool flag = true;//true代表着真
	cout << flag << endl;
	flag = false;//第二个不需要加bool
	cout << flag << endl;
	
	//2.查看bool类型所占内存空间——1个字节
	cout << sizeof(bool) << endl;
	
	system("pause");
	return 0;
}

