#include <iostream>
using namespace std;

int main()
{
	while (true) 
	{
		cout << "————————" << endl << "请输入你的分数" << endl;
		float score;
		cin >> score;
		cout << "让我看看" << endl << "......" << endl;
		if (score >= 60)
		{
			if (score < 70)
				cout << "及格了，但是就这？" << endl;
			else if (score < 80)
				cout << "勉勉强强吧" << endl;
			else if (score < 90)
				cout << "算良好吧" << endl;
			else if (score <= 100)
				cout << "优秀无需多言" << endl;
			else if (score > 100)
			{
				cout << "满分就100，搁这向天再借500分？" << endl;
				cout << "给我爬！" << endl;
			}
		}
		else          // else if(score < 60)  也有相同的效果
		{
			if (score >= 0)
			{
				cout << "不及格，给我爬！" << endl;
				cout << "无需多言，补考雅座一位。" << endl;
			}        // {}表示大括号里的全部会执行
			else if (score < 0)
				cout << "负分，给我爬 !" << endl;
		}
	}
	
	return 0;

}