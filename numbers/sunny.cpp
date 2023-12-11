// no whose next no is perfect square is sunny no.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;

    cout << "enter a number: ";
    cin >> num;

    int nextnum = num + 1;

    for (int i = 1; i * i <= nextnum; i++)
    {
        if (i * i == nextnum)
        {
            cout << num << " is a sunny number" << endl;
            return 0;
        }
    }

    cout << num << " is not a sunny number" << endl;
    return 0;
}