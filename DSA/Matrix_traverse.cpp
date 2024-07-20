#include <bits/stdc++.h>
using namespace std;

int main()
{
    int mtx[3][4];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> mtx[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << mtx[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << mtx[j][i] << " ";
        }
        cout << endl;
    }

    return 0;
}