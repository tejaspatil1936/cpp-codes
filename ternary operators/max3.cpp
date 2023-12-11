#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, max;

    cout << "Enter a : ";
    cin >> a;
    cout << "Enter b : ";
    cin >> b;
    cout << "Enter c : ";
    cin >> c;

    max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

    cout << max << " is greatest" << endl;

    return 0;
}