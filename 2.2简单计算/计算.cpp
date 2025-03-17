#define _USE_MATH_DEFINES  //引入cmath定义库，需要放在  #include <cmath>  之前
#include <iostream>
#include <cmath>           // 引入 cmath 头文件，用于使用 M_PI
#include <iomanip>         // 引入 iomanip 头文件，用于控制输出精度

using namespace std;

const double pi = M_PI; // 使用 cmath 库中定义的 M_PI 常量

int main() {
    double r;

    while (true) { // 使用 while(true) 创建无限循环
        cout << "请输入圆的半径：" << endl;
        cin >> r;

        // 增加半径的有效性判断
        if (r < 0) {
            cout << "半径不能为负数！请重新输入一个非负数半径。" << endl;
            continue; // 如果半径无效，跳过本次计算，直接进入下一次循环 (重新输入半径)
        }

        double area, cir;
        area = r * r * pi;
        cir = 2 * r * pi;

        cout << "经过计算" << endl;
        cout << fixed << setprecision(2) << "面积为 " << area << endl; //精确到2位小数
        cout << fixed << setprecision(2) << "周长为 " << cir << endl;  //精确到2位小数
        cout << endl; // 增加一个空行，使每次计算结果之间更清晰

        // 循环会自动回到 while(true) 的开始，再次提示输入半径，无需用户额外操作
    }

    // 注意：由于是无限循环，程序会一直运行，直到手动停止 (例如在终端中按 Ctrl+C)
    // 因此，不需要 "程序结束。" 的提示，也不需要 system("pause"); 因为程序不会自动结束
    // system("pause"); //  不再需要 system("pause"); 因为程序是无限循环的

    return 0;
}