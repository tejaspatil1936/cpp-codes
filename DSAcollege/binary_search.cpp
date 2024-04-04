// Binary Search algo
#include <iostream>
using namespace std;
int main()
{
    int i, n, item, beg, end, mid;
    cout << "Enter the size of array:\n";
    cin >> n;
    int arr[n];
    cout << "Enter the elements in the array in ascending order\n";
    for (i = 0; i < n; i++)
        cin >> arr[i];
    cout << "Given array is:\n";
    for (i = 0; i < n; i++)
        cout << arr[i] << "\t";
    cout << "\n";
    cout << "Enter the element that u want to search in the array\n";
    cin >> item;
    /*binary search algorithm logic begins here*/
    beg = 0;
    end = n - 1;
    mid = (beg + end) / 2;
    while ((beg <= end) && (arr[mid] != item))
    {
        if (item < arr[mid])
            end = mid - 1;
        else
            beg = mid + 1;
        mid = (beg + end) / 2;
    }
    if (arr[mid] == item)
        cout << "Element found at position " << mid + 1 << "\n";
    else
        cout << "Element not found in the array\n";
    return 0;
}