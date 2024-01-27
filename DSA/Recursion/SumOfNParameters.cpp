// parameterized recursion
#include <bits/stdc++.h>
using namespace std;

void SumOfNum(int Num, int Sum)
{
    if (Num < 1)
    {
        cout << "Sum : " << Sum << endl;
        return;
    }
    Sum += Num;
    SumOfNum(--Num, Sum);
}

int main()
{
    int Num, Sum = 0;
    cout << "Enter the number : ";
    cin >> Num;
    SumOfNum(Num, Sum);

    return 0;
}