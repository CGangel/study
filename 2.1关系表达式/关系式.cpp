#include<iostream>
using namespace std;
int main()

{
    //C++��false��ֵΪ0��true��ֵΪ1
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
