#include<iostream>
using namespace std;

/*
1.单精度  占用4字节  7位有效数字
float

2.双精度  占用8字节  15-16位有效数字
double
*/


int main() 
{

	//计算机默认识别为double，所以后面要加f来确保识别为float
	float num1 = 3.14f;

	double num2 = 3.1415926;

	//默认情况下，如果输出一个【小数】，无论单精度还是双精度，计算机都【只精确到6位数字】
    cout << "num1 = " << num1 << endl << "num2 = " << num2 << endl;

	//统计float和double占用内存空间(f:4)(d:8)
	cout << "float占用的内存空间为：" << sizeof(float) << endl;
	cout << "double占用的内存空间为：" << sizeof(double) << endl;

	//科学计数法
	float num3 = 3e2; // 3 * 10^2 = 3 * 100
	cout << "num3 = " << num3 << endl;

	float num4 = 3e-2; //3 * 10^-2 = 3 * 0.01
	cout << "num4 = " << num4 << endl;

	system("pause");

	return 0;
}