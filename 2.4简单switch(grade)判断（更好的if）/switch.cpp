#include <iostream>
using namespace std;

#include <iostream>

using namespace std;

int main() {
    while (true) 
    {
        cout << "————————" << endl << "请输入你的分数" << endl;
        float score;
        cin >> score;
        cout << "让我看看" << endl << "......" << endl;

        int level;

        if (score < 0) 
        {
            level = -1; // 负分
        }
        else if (score < 60) 
        {
            level = 0;  // 不及格
        }
        else if (score < 70) 
        {
            level = 1;  // 及格
        }
        else if (score < 80) 
        {
            level = 2;  // 勉强
        }
        else if (score < 90) 
        {
            level = 3;  // 良好
        }
        else if (score <= 100) 
        {
            level = 4;  // 优秀
        }
        else 
        {
            level = 5;  // 超过100分
        }

        switch (level) 
        {
            case -1:
                cout << "负分，给我爬 !" << endl;
                break;
            case 0:
                cout << "不及格，给我爬！" << endl;
                cout << "无需多言，补考雅座一位。" << endl;
                break;
            case 1:
                cout << "及格了，但是就这？" << endl;
                break;
            case 2:
                cout << "勉勉强强吧" << endl;
                break;
            case 3:
                cout << "算良好吧" << endl;
                break;
            case 4:
                cout << "优秀无需多言" << endl;
                break;
            case 5:
                cout << "满分就100，搁这向天再借500分？" << endl;
                cout << "给我爬！" << endl;
                break;
        }
    }

    return 0;
}