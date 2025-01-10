#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[3][4];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << "address of arr[" << i << "][" << j << "]: " << &arr[i][j] << endl;
        }
    }

    return 0;
}
