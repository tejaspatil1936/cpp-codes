#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the no of elements in array ";
    cin >> n;
    int myArray[n];
    cout << "Enter nos only from 0 till 15 " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> myArray[i];
    }

    int myHashArray[16] = {0};
    for (int i = 0; i < n; i++)
    {
        myHashArray[myArray[i]] += 1;
    }

    int query;

    cout << "Enter the no of Queries ";
    cin >> query;

    while (query--)
    {
        int Element;
        cin >> Element;

        cout << Element << " occured " << myHashArray[Element] << " times" << endl;
    }

    return 0;
}
// this code is valid for nos in range of 0 to 15 i.e. (lenght of hasharray - 1)
// hash array will store no n occured how many times at nth index of hash array