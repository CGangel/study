#include<iostream>
using namespace std;

/*
�﷨��
char ch = 'a' ;

C/C++�У��ַ��ͱ���ֻռ��1���ֽ�
*/

int main() {

	char ch = 'a';
	cout << ch << endl << "charռ�õĿռ�Ϊ" << sizeof(char) << endl;

	//�ַ��ͱ����ĳ�������
	//char a = "b"; //�����ַ��ͱ�����Ҫ��''����""
	//char b = 'abcdef'�� //�����ַ��ͱ�����''��ֻ����һ���ַ�

	//�ַ��ͱ�����Ӧ��ASCII����
	//A = 65
	//a = 97
	//(space) = 32
	cout << "a��Ӧ��ASCII����Ϊ" << (int)ch << endl; //ǿ��ת��Ϊint�����ɲ鿴��Ӧ��ASCII����
	system("pause");

	return 0;
}
