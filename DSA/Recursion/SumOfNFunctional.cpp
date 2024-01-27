#include <bits/stdc++.h>
using namespace std;

int SumOfNum(int Num)
{
    if (Num == 0)
    {
        return 0;
    }
    return Num + SumOfNum(--Num);
}
int main()
{
    int Num, Sum;
    cout << "Enter the Number : ";
    cin >> Num;
    Sum = SumOfNum(5);
    cout << "Sum is : " << Sum << endl;
    return 0;
}