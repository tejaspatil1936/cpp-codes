#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, r, sum, temp, numDigits;

    cout << "enter the number up to which you want to find armstrong numbers: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        sum = 0;
        numDigits = 0;
        temp = i;

        // calculate the number of digits
        int tempNum = i;
        while (tempNum > 0)
        {
            numDigits++;
            tempNum /= 10;
        }

        // check if the current number is an armstrong number
        int checkNum = i;
        while (checkNum > 0)
        {
            r = checkNum % 10;
            sum = sum + pow(r, numDigits);
            checkNum = checkNum / 10;
        }

        if (temp == sum)
        {
            cout << i << " ";
        }
    }

    cout << endl;
    return 0;
}
