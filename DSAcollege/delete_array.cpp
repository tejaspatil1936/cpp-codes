#include <iostream>
using namespace std;
int main()
{
    int n, i, item, k;
    cout << "Enter the size of array\n";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array\n";
    for (i = 0; i < n; i++)
        cin >> arr[i];
    cout << "The given array is as follows:\n";
    for (i = 0; i < n; i++)
        cout << arr[i] << "\t";
    cout << "\n";
    cout << "Enter the position of the element that u want to delete\n";
    cin >> k;
    item = arr[k - 1];
    for (i = k - 1; i < n - 1; i++)
        arr[i] = arr[i + 1];
    cout << "Array after element deletion:\n";
    for (i = 0; i < n - 1; i++)
        cout << arr[i] << "\t";
    cout << "\n";
}