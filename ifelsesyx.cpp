// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int age, marks;
//     cout << "enter the age \n";
//     cin >> age;
//     if (age >= 18)
//     {
//         cout << "enter marks \n";
//         cin >> marks;
//         if (marks >= 60)
//         {
//             cout << "you are eligible for licsence" << endl;
//         }
//         else if (marks < 60)
//         {
//             cout << "repply" << endl;
//         }
//     }
//     else {
//         cout << "you are not eligible" << endl;
//     }
//     return 0;
// }
// C++ program to check if the person is eligible for driving license
// condition age =18+ and 2nd condition rto test pass or more than 60 marks
#include <iostream>
using namespace std;
int main()
{
    int age, marks;
    cout << "enter the age : ";
    cin >> age;
    if (age >= 18)
    {
        cout << "enter the marks in RTO : ";
        cin >> marks;
        if (marks >= 60)
        {
            cout << "the person is eligible for license" << endl;
        }
        else
        {
            cout << "reapply for the RTO test " << endl;
        }
    }
    else
    {
        cout << "the person is not eligible for license" << endl;
    }
    return 0;
}
