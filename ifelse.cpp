#include <iostream>
using namespace std;

int main()
{
    int m;
    cout << "Enter marks in % : ";
    cin >> m;

    if (m >= 75)
    {
        cout << "you are eligible for interview ";
    }
    if (m < 75)
    {
        cout << "you are not eligible for interview ";
    }

    return 0;
}
