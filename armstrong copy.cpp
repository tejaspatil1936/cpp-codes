// ABC = A^3 + B^3 + C^3 :: armstrong no

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int num;
//     int sum = 0;
//     int temp = sum;
//     cout << "enter a number: ";
//     cin >> num;

//     for (temp = num; temp > 0; temp /= 10)
//     {
//         int digit = temp % 10;
//         sum += digit * digit * digit;
//     }

//     if (sum == num)
//     {
//         cout << num << " is an armstrong number." << endl;
//     }
//     else
//     {
//         cout << num << " is not an armstrong number." << endl;
//     }

//     return 0;
// }

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, r, sum = 0, temp, numDigits = 0;

    cout << "enter the number=";
    cin >> n;

    temp = n;

    int tempNum = n;
    while (tempNum > 0)
    {
        numDigits++;
        tempNum /= 10;
    }

    while (n > 0)
    {
        r = n % 10;
        sum = sum + pow(r, numDigits);
        n = n / 10;
    }

    cout << temp << (temp == sum ? " is an armstrong number \n" : " is not an armstrong number \n");

    return 0;
}
