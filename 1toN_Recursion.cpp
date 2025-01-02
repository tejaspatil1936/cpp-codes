#include <bits/stdc++.h>
using namespace std;
void printNum(int MyCount, int Num)
{
    if (MyCount > Num)
    {
        return;
    }
    cout << MyCount << endl;
    MyCount++;
    printNum(MyCount++, Num);
}
int main()
{
    int Num, MyCount = 1;
    cout << "enter the no : ";
    cin >> Num;
    printNum(MyCount, Num);
    return 0;
}