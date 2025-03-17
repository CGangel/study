#include<iostream>
using namespace std;
int main()

{
    //C++中false的值为0；true的值为1
    int i = 4, j = 5;
    cout << (i > j) << endl;             //false 0
    cout << (i >= j) << endl;            //false 0
    cout << (i < j) << endl;             //true 1
    cout << (i <= j) << endl;            //true 1
    cout << (i == j) << endl;            //false 0
    cout << (i != j) << endl;            //true 1
    cout << (i != j) + (i < j) << endl;  //true + true = 1 + 1 =2
    system("pause");
    return 0;
}
