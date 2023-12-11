// ABC = A^3 + B^3 + C^3 :: armstrong no

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    int sum = 0;
    int temp = sum;
    cout << "enter a number: ";
    cin >> num;

    for (temp = num; temp > 0; temp /= 10)
    {
        int digit = temp % 10;
        sum += digit * digit * digit;
    }

    if (sum == num)
    {
        cout << num << " is an armstrong number." << endl;
    }
    else
    {
        cout << num << " is not an armstrong number." << endl;
    }

    return 0;
}
