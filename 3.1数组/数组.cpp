#include <iostream>
#include <algorithm>  // sort需要包含 algorithm 头文件
#include <numeric>  // 用于计算平均数
#include <vector>   // 用于动态数组，方便计算中位数
#include <cmath>   // 用于计算方差
using namespace std;

int main()
{
    while (true)
    {
        char b[13] = { 'H','e','l','l','o',',','W','o','r','l','d','!' };
        cout << b << endl;               	//输出字符数组，遇到‘\0’结束



        int i, a[10];
        vector<int> inputOrder(10); // 记录输入顺序
        cout << "请输入10个整数:" << endl;
        for (i = 0; i < 10; i++)
        {
            cin >> a[i];
            inputOrder[i] = a[i]; // 记录输入顺序
        }
        int maxVal = a[0], minVal = a[0], maxIndex = 0, minIndex = 0; // 找到最大值和最小值
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
        // 使用 sort 函数进行排序
        sort(a, a + 10);  //  a 是数组的起始地址， a + 10 是数组的结束地址
        // 计算平均数
        double sum = accumulate(a, a + 10, 0.0);
        double average = sum / 10;
        // 计算中位数
        double median = (a[4] + a[5]) / 2.0;

        // 计算方差
        double variance = 0.0;
        for (i = 0; i < 10; i++) 
        {
            variance += pow(a[i] - average, 2);
        }
        variance /= 10;
        // 计算标准差
        double standardDeviation = sqrt(variance);
        cout << "排序后，结果由小到大是:" << endl;
        for (i = 0; i < 10; i++)
            cout << a[i] << " ";
        cout << endl;
        // 查找最大值和最小值在输入数组中的位置
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
        cout << "其中，第 " << originalMaxIndex << " 次输入的数字 " << maxVal << " 最大；" << endl
            << "第 " << originalMinIndex << " 次输入的数字 " << minVal << " 最小；" <<endl
            << "平均数是：" << average << "，" << endl
            << "中位数是：" << median << "，" << endl
            << "方差是：" << variance << "，" << endl
            << "标准差是：" << standardDeviation << endl;
    }
    return 0;
}
