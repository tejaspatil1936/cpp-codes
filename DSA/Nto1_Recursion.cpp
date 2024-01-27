#include <bits/stdc++.h>
using namespace std;
void printNum(int MyCount, int Num)
{
    if (MyCount < 1)
    {
        return;
    }
    cout << MyCount << endl;
    MyCount--;
    printNum(MyCount--, Num);
}
int main()
{
    int Num;
    cout << "enter the no : ";
    cin >> Num;
    int MyCount = Num;
    printNum(MyCount, Num);
    return 0;
}