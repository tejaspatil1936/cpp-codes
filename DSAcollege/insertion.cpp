#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {4, 6, 18, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    int item = 78;

    for (int i = n - 1; i >= k; i--)
    {
        arr[i + 1] = arr[i];
    }

    arr[k] = item;
    n++;

    cout << "Modified array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
