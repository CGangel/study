#include<iostream>
using namespace std;

/*
语法：
char ch = 'a' ;

C/C++中，字符型变量只占用1个字节
*/

int main() {

	char ch = 'a';
	cout << ch << endl << "char占用的空间为" << sizeof(char) << endl;

	//字符型变量的常见错误
	//char a = "b"; //创建字符型变量，要用''而非""
	//char b = 'abcdef'； //创建字符型变量，''内只能有一个字符

	//字符型变量对应的ASCII编码
	//A = 65
	//a = 97
	//(space) = 32
	cout << "a对应的ASCII编码为" << (int)ch << endl; //强制转化为int，即可查看对应的ASCII编码
	system("pause");

	return 0;
}
