#include<iostream>
#include<string>
using namespace std;

/*�����Ķ��巽ʽ
1. #define �곣��
2. const ���εı���
*/



//#define�곣����һ��д�ڿ�ͷ����  #define ������ ����
//�������棺һ�ܶ���Ϊ��7��
#define week 7
string sb = "sb";

/*
�����޷����ģ���
�����ô�ģ�
int week = 14
��ô���ᱨ��
*/

int main() {

	cout << "һ��һ����" << week << "��" << endl;
	
	cout << "��һ�������ޣ�����Ϊ" << sb << endl;

	//const���εı�����һ��д���м䣩��const ������ ����
	//const���εı�����ͬ�ڳ����������ñ������޷��޸ģ���
	const int month = 30;
	/*
	�����ô�ģ�
	int month = 24
	��ô���ᱨ��
	*/

	cout << "һ����ͨ����" << month << "��" << endl;

	system("pause");

	return 0;
}