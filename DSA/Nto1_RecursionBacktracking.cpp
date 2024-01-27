#include <bits/stdc++.h>
using namespace std;
void printNum(int Num, int MyCount)
{
    if (Num < MyCount)
    {
        return;
    }
    printNum(Num, ++MyCount);
    cout << --MyCount << endl;
}
int main()
{
    int Num, MyCount = 1;
    cout << "Enter the number : ";
    cin >> Num;
    printNum(Num, MyCount);
    return 0;
}