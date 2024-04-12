#include <iostream>
using namespace std;
int main()
{
    int n, i, ptr, k, temp;

    cout << "Enter the size of array\n";
    cin >> n;

    int arr[n];

    cout << "Enter the elements of the array\n";
    for (i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Array before sorting:\n";
    for (i = 0; i < n; i++)
        cout << arr[i] << "\t";
    cout << "\n";

    for (k = 0; k < n - 1; k++)
    {
        ptr = 0;
        while (ptr < n - k)
        {
            if (arr[ptr] > arr[ptr + 1])
            {
                temp = arr[ptr];
                arr[ptr] = arr[ptr + 1];
                arr[ptr + 1] = temp;
            }
            ptr = ptr + 1;
        }
    }
 
    cout << "Array after sorting:\n";
    for (i = 0; i < n; i++)
        cout << arr[i] << "\t";
    cout << "\n";
}