#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int n;
    // cout << "enter the nos of elements in array : ";
    // cin >> n;
    // int Array[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> Array[i];
    // }

    int array[] = {5, 6, 3, 8, 10, 5, 6};
    int max = array[0];
    for (int i = 1; i < 7; i++)
    {
        if (max <= array[i])
        {
            max = array[i];
        }
    }
    cout << max << endl;

    return 0;
}