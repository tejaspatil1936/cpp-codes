#include <bits/stdc++.h>
using namespace std;

int main()
{
    int j;
    int arr[] = {4, 6, 18, 9, 10};
    int k = 3;
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "original array : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    for (j = k; j < n - 1; j++)
    {
        arr[j] = arr[j + 1];
        n--;
    }

    cout << "modified array : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}