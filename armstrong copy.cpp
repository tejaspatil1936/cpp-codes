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
