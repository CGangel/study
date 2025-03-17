#include <iostream>
#include <algorithm>  // sort��Ҫ���� algorithm ͷ�ļ�
#include <numeric>  // ���ڼ���ƽ����
#include <vector>   // ���ڶ�̬���飬���������λ��
#include <cmath>   // ���ڼ��㷽��
using namespace std;

int main()
{
    while (true)
    {
        char b[13] = { 'H','e','l','l','o',',','W','o','r','l','d','!' };
        cout << b << endl;               	//����ַ����飬������\0������



        int i, a[10];
        vector<int> inputOrder(10); // ��¼����˳��
        cout << "������10������:" << endl;
        for (i = 0; i < 10; i++)
        {
            cin >> a[i];
            inputOrder[i] = a[i]; // ��¼����˳��
        }
        int maxVal = a[0], minVal = a[0], maxIndex = 0, minIndex = 0; // �ҵ����ֵ����Сֵ
        for (i = 1; i < 10; i++) 
        {
            if (a[i] > maxVal) 
            {
                maxVal = a[i];
                maxIndex = i;
            }
            if (a[i] < minVal) 
            {
                minVal = a[i];
                minIndex = i;
            }
        }
        // ʹ�� sort ������������
        sort(a, a + 10);  //  a ���������ʼ��ַ�� a + 10 ������Ľ�����ַ
        // ����ƽ����
        double sum = accumulate(a, a + 10, 0.0);
        double average = sum / 10;
        // ������λ��
        double median = (a[4] + a[5]) / 2.0;

        // ���㷽��
        double variance = 0.0;
        for (i = 0; i < 10; i++) 
        {
            variance += pow(a[i] - average, 2);
        }
        variance /= 10;
        // �����׼��
        double standardDeviation = sqrt(variance);
        cout << "����󣬽����С������:" << endl;
        for (i = 0; i < 10; i++)
            cout << a[i] << " ";
        cout << endl;
        // �������ֵ����Сֵ�����������е�λ��
        int originalMaxIndex = -1, originalMinIndex = -1;
        for (i = 0; i < 10; ++i) 
        {
            if (inputOrder[i] == maxVal && originalMaxIndex == -1) 
            {
                originalMaxIndex = i + 1;
            }
            if (inputOrder[i] == minVal && originalMinIndex == -1) 
            {
                originalMinIndex = i + 1;
            }
        }
        cout << "���У��� " << originalMaxIndex << " ����������� " << maxVal << " ���" << endl
            << "�� " << originalMinIndex << " ����������� " << minVal << " ��С��" <<endl
            << "ƽ�����ǣ�" << average << "��" << endl
            << "��λ���ǣ�" << median << "��" << endl
            << "�����ǣ�" << variance << "��" << endl
            << "��׼���ǣ�" << standardDeviation << endl;
    }
    return 0;
}
