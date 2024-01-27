#include <bits/stdc++.h>
using namespace std;
void SwapArray(int arr[], int l, int r)
{
    if (l >= r)
    {
        return;
    }
    swap(arr[l], arr[r]);
    SwapArray(arr, l+1, r-1);
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    SwapArray(arr, 0, 4);
    
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}