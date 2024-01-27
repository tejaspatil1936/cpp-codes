#include <bits/stdc++.h>
using namespace std;

void printArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

void swapAlternate(int array[], int size)
{
    for (int i = 0; i < size; i += 2)
    {
        if (i + 1 < size)
        {
            swap(array[i], array[i + 1]);
        }
    }
}
int main()
{
    int evenNoElements[8] = {89, 34, 56, 45, 48, 59, 87, 83};

    cout << "original even array : ";
    printArray(evenNoElements, 8);

    swapAlternate(evenNoElements, 8);

    cout << "modified array : ";
    printArray(evenNoElements, 8);

    int oddNoElements[8] = {89, 34, 56, 45, 48, 59, 87};

    cout << "original odd array : ";
    printArray(oddNoElements, 8);

    swapAlternate(oddNoElements, 8);

    cout << "modified array : ";
    printArray(oddNoElements, 8);

    return 0;
}