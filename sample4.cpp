#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cout << "enter the year : ";
    cin >> a;
    if ((a % 4 == 0 && a % 100 != 0) || a % 400 == 0 )
    {
        cout << "leap year" << endl;
    }
    if (a % 4 == 0 || a % 100 != 0)
    {
        cout << "not leap year" << endl;
    }
    return 0;
}