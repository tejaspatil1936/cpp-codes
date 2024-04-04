#include <iostream>
using namespace std;
int main()
{
    int n, i, item, k;
    cout << "Enter the size of array\n";
    cin >> n;
    int arr[n + 1];
    cout << "Enter the elements of the array\n";
    for (i = 0; i < n; i++)
        cin >> arr[i];
    cout << "The given array is as follows:\n";
    for (i = 0; i < n; i++)
        cout << arr[i] << "\t";
    cout << "\n";
    cout << "Enter the element you want to insert into the array. Also specify its location in the array:\n";
    cin >> item >> k;
    int j;
    j = n;
    while (j >= k - 1)
    {
        arr[j + 1] = arr[j];
        j = j - 1;
    }
    arr[k - 1] = item;
    cout << "Array after element insertion:\n";
    for (i = 0; i < n + 1; i++)
        cout << arr[i] << "\t";
    cout << "\n";
}