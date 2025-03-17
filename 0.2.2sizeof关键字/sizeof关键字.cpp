#include<iostream>
using namespace std;
/*
sizeof 可以统计 各个数据类型 所占用的 空间大小

用法
sizeof( 数据类型/变量 )

*/

/*
常用关键字
auto 	 break       bool	    case	    char      catch     class
const    continue    default    delete      do        double    else
enum     explicit    export	    extern      false     float     for
friend	 goto        if         inline      int       long      new

*/

int main() {

	short num1 = 1;
	short num11 = 1;
	int num2 = 1;
	int num22 = 1;
	long num3 = 1;
	long num33 = 1;
	long long num4 = 1;
	long long num44 = 1;
	long long num444 = 1;

	cout << "size of short is " << sizeof(short) << endl;
	cout << "size of int is " << sizeof(int) << endl;
	cout << "size of long is " << sizeof(long) << endl;
	cout << "size of long long is " << sizeof(long long) << endl;
	cout << "size of num444 is " << sizeof(num444) << endl;


	system("pause");

	return 0;
}