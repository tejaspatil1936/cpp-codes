#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "enter the no of elements : " << endl;
    cin >> n;
    int data[n];

    for (int i = 0; i < n; i++)
    {
        cin >> data[i];
    }

    int location = 1;
    int max = data[0];

    for (int k = 1; k <= n; k++)
    {
        if (k >= n)
        {
            cout << "location : " << location << endl;
            cout << "max element : " << max << endl;
        }
        if (max < data[k])
        {
            location = k + 1;
            max = data[k];
        }
    }

    return 0;
}