#include <iostream>
using namespace std;

int main()
{
	while (true) 
	{
		cout << "����������������" << endl << "��������ķ���" << endl;
		float score;
		cin >> score;
		cout << "���ҿ���" << endl << "......" << endl;
		if (score >= 60)
		{
			if (score < 70)
				cout << "�����ˣ����Ǿ��⣿" << endl;
			else if (score < 80)
				cout << "����ǿǿ��" << endl;
			else if (score < 90)
				cout << "�����ð�" << endl;
			else if (score <= 100)
				cout << "�����������" << endl;
			else if (score > 100)
			{
				cout << "���־�100�����������ٽ�500�֣�" << endl;
				cout << "��������" << endl;
			}
		}
		else          // else if(score < 60)  Ҳ����ͬ��Ч��
		{
			if (score >= 0)
			{
				cout << "�����񣬸�������" << endl;
				cout << "������ԣ���������һλ��" << endl;
			}        // {}��ʾ���������ȫ����ִ��
			else if (score < 0)
				cout << "���֣������� !" << endl;
		}
	}
	
	return 0;

}