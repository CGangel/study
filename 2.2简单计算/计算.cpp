#define _USE_MATH_DEFINES  //����cmath����⣬��Ҫ����  #include <cmath>  ֮ǰ
#include <iostream>
#include <cmath>           // ���� cmath ͷ�ļ�������ʹ�� M_PI
#include <iomanip>         // ���� iomanip ͷ�ļ������ڿ����������

using namespace std;

const double pi = M_PI; // ʹ�� cmath ���ж���� M_PI ����

int main() {
    double r;

    while (true) { // ʹ�� while(true) ��������ѭ��
        cout << "������Բ�İ뾶��" << endl;
        cin >> r;

        // ���Ӱ뾶����Ч���ж�
        if (r < 0) {
            cout << "�뾶����Ϊ����������������һ���Ǹ����뾶��" << endl;
            continue; // ����뾶��Ч���������μ��㣬ֱ�ӽ�����һ��ѭ�� (��������뾶)
        }

        double area, cir;
        area = r * r * pi;
        cir = 2 * r * pi;

        cout << "��������" << endl;
        cout << fixed << setprecision(2) << "���Ϊ " << area << endl; //��ȷ��2λС��
        cout << fixed << setprecision(2) << "�ܳ�Ϊ " << cir << endl;  //��ȷ��2λС��
        cout << endl; // ����һ�����У�ʹÿ�μ�����֮�������

        // ѭ�����Զ��ص� while(true) �Ŀ�ʼ���ٴ���ʾ����뾶�������û��������
    }

    // ע�⣺����������ѭ���������һֱ���У�ֱ���ֶ�ֹͣ (�������ն��а� Ctrl+C)
    // ��ˣ�����Ҫ "���������" ����ʾ��Ҳ����Ҫ system("pause"); ��Ϊ���򲻻��Զ�����
    // system("pause"); //  ������Ҫ system("pause"); ��Ϊ����������ѭ����

    return 0;
}