#include <bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}

int main()
{
    int num, sum = 0, temp;

    cout << "enter a number: ";
    cin >> num;

    temp = num;

    while (temp > 0)
    {
        int digit = temp % 10;
        sum += factorial(digit);
        temp /= 10;
    }

    if (sum == num)
    {
        cout << num << " is a Peterson number." << endl;
    }
    else
    {
        cout << num << " is not a Peterson number." << endl;
    }

    return 0;
}
