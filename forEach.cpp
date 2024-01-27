#include <iostream>
using namespace std;

int main()
{
    int arr[] = {10, 20, 30, 40};

    // mentioning the data type of it
    for (int x : arr)
        cout << x << " ";

    // by using auto keyword so we need not to mention datat type of array
    for (auto x : arr)
        cout << x << " ";

    return 0;
}