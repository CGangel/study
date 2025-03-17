#include<iostream>
#include<string>
using namespace std;

/*常量的定义方式
1. #define 宏常量
2. const 修饰的变量
*/



//#define宏常量（一般写在开头）：  #define 常量名 常量
//比如下面：一周定义为有7天
#define week 7
string sb = "sb";

/*
常量无法更改！！
如果这么改：
int week = 14
那么将会报错
*/

int main() {

	cout << "一周一共有" << week << "天" << endl;
	
	cout << "大一上晚自修，评价为" << sb << endl;

	//const修饰的变量（一般写在中间）：const 变量名 变量
	//const修饰的变量等同于常量，后续该变量将无法修改！！
	const int month = 30;
	/*
	如果这么改：
	int month = 24
	那么将会报错
	*/

	cout << "一个月通常有" << month << "天" << endl;

	system("pause");

	return 0;
}