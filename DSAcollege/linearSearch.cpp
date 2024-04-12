#include <iostream>
using namespace std;

int main()
{
    int n, ITEM, loc, i;

    cout << "Enter the size of array\n";
    cin >> n;
    int DATA[n + 1];

    cout << "Enter the elements of the array\n";
    for (i = 0; i < n; i++)
    {
        cin >> DATA[i]; 
    }
    cout << "Enter the number to check whether in array: ";
    cin >> ITEM;

    DATA[n] = ITEM;
    loc = 0;

    while (DATA[loc] != ITEM)
    {
        loc = loc + 1;
    }

    if (loc == n)
    {
        loc = 0;
        cout << "not found" << endl;
    }
    else
    {
        cout << "location : " << loc + 1 << endl;
    }
    

    return 0;
}
