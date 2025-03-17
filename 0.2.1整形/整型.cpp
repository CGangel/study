#include<iostream>
using namespace std;

//.短整形     2字节  -2^15 - 2^15      max 32768-1  ＞max则溢出
short num1 = 32767;

//2.整形      4字节  -2^31 - 2^31      max 2147483648-1  ＞max则溢出  
int num2 = 2147483647;

//3.长整形    4字节  -2^31 - 2^31      max 2147483648-1  ＞max则溢出
long num3 = 2147483647;

//4.长长整形  8字节  -2^63 - 2^63      max 9223372036854775808-1  ＞max则溢出
long long num4 = 9223372036854775807;

int main() {

	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;
	cout << "num3 = " << num3 << endl;
	cout << "num4 = " << num4 << endl;

	system("pause");

	return 0;
}
