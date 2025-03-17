#include<iostream>
using namespace std;

/*标识符命名规则
1.标识符不可以是关键字(如 int else auto new this 等等）
2.标识符由字母、下划线、数字构成（现在似乎可以用汉字？）
3.标识符的第一个字符【只能是字母或下划线】
4.标识符区分大小写
*/

int main() {

	//违反1，报错
	//int int = 1;
	
	//违反2，报错（似乎没报错？）
	int 母校 = 666;

	//违反3，报错
	//int 114514 = 1919810;

	//区分大小写
	int homo = 114514;
	int HOMO = 1919810;

	system("pause");

	return 0;
}