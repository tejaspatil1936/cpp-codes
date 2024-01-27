#include <bits/stdc++.h>
using namespace std;
void printNum(int MyCount)
{
    if (MyCount < 1)
    {
        return;
    }
    printNum(--MyCount);
    cout << ++MyCount << endl;
}
int main()
{
    int Num;
    cout << "enter the no : ";
    cin >> Num;
    int MyCount = Num;
    printNum(MyCount);
    return 0;
}