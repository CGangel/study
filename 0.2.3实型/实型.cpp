#include<iostream>
using namespace std;

/*
1.������  ռ��4�ֽ�  7λ��Ч����
float

2.˫����  ռ��8�ֽ�  15-16λ��Ч����
double
*/


int main() 
{

	//�����Ĭ��ʶ��Ϊdouble�����Ժ���Ҫ��f��ȷ��ʶ��Ϊfloat
	float num1 = 3.14f;

	double num2 = 3.1415926;

	//Ĭ������£�������һ����С���������۵����Ȼ���˫���ȣ����������ֻ��ȷ��6λ���֡�
    cout << "num1 = " << num1 << endl << "num2 = " << num2 << endl;

	//ͳ��float��doubleռ���ڴ�ռ�(f:4)(d:8)
	cout << "floatռ�õ��ڴ�ռ�Ϊ��" << sizeof(float) << endl;
	cout << "doubleռ�õ��ڴ�ռ�Ϊ��" << sizeof(double) << endl;

	//��ѧ������
	float num3 = 3e2; // 3 * 10^2 = 3 * 100
	cout << "num3 = " << num3 << endl;

	float num4 = 3e-2; //3 * 10^-2 = 3 * 0.01
	cout << "num4 = " << num4 << endl;

	system("pause");

	return 0;
}