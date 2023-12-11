// C++ progarm to print the number which is palindrome or not
#include <bits/stdc++.h>
using namespace std;

string palindrone()
{

    return 0;
}
int main()
{
    int num, palindrone;
    cout << "enter the number : " << endl;
    cin >> num;
    while (num != 0)
    {
        int
    }

    if (num = palindrone)
    {
        cout << "its a palindrone number" << endl;
    }
    else
    {
        cout << "its not a palindrone number  " << endl;
    }
    return 0;
}

#include <iostream>
using namespace std;
bool isPalindrome(int num)
{
    int originalNum = num;
    int reversedNum = 0;

    while (num > 0)
    {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }

    return originalNum == reversedNum;
}
int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;
    if (isPalindrome(num))
    {
        cout << "It's a palindrome number" << endl;
    }
    else
    {
        cout << "It's not a palindrome number" << endl;
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

double findArea(double radius)
{
    return 3.14 * radius * radius;
}

double findArea(double base, double height)
{
    return 0.5 * base * height;
}

int main()
{
    cout << "Area of circle with radius : " << findArea(5.0) << endl;

    cout << "Area of triangle with base 4 and height 3: " << findArea(4.0, 3.0) << endl;

    return 0;
}
