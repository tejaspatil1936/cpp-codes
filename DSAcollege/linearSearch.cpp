#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number to check whether in array: ";
    cin >> n;
    int DATA[6] = {7, 5, 2, 9, 10, 1};
    int Array_length = sizeof(DATA) / sizeof(DATA[0]);

    for (int i = 0; i < Array_length; i++)
    {
        if (n == DATA[i])
        {
            cout << "The index of given number is = " << i << endl;
            return 0;
        }
    }
    return 0;
}
