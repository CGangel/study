#include <iostream>
using namespace std;

#include <iostream>

using namespace std;

int main() {
    while (true) 
    {
        cout << "����������������" << endl << "��������ķ���" << endl;
        float score;
        cin >> score;
        cout << "���ҿ���" << endl << "......" << endl;

        int level;

        if (score < 0) 
        {
            level = -1; // ����
        }
        else if (score < 60) 
        {
            level = 0;  // ������
        }
        else if (score < 70) 
        {
            level = 1;  // ����
        }
        else if (score < 80) 
        {
            level = 2;  // ��ǿ
        }
        else if (score < 90) 
        {
            level = 3;  // ����
        }
        else if (score <= 100) 
        {
            level = 4;  // ����
        }
        else 
        {
            level = 5;  // ����100��
        }

        switch (level) 
        {
            case -1:
                cout << "���֣������� !" << endl;
                break;
            case 0:
                cout << "�����񣬸�������" << endl;
                cout << "������ԣ���������һλ��" << endl;
                break;
            case 1:
                cout << "�����ˣ����Ǿ��⣿" << endl;
                break;
            case 2:
                cout << "����ǿǿ��" << endl;
                break;
            case 3:
                cout << "�����ð�" << endl;
                break;
            case 4:
                cout << "�����������" << endl;
                break;
            case 5:
                cout << "���־�100�����������ٽ�500�֣�" << endl;
                cout << "��������" << endl;
                break;
        }
    }

    return 0;
}