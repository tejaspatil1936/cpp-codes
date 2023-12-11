#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, minimum;

    cout << "Enter a : ";
    cin >> a;
    cout << "Enter b : ";
    cin >> b;
    cout << "Enter c : ";
    cin >> c;

    minimum = (a < b) ? ((a < c) ? a : c) : ((b < c) ? b : c);

    cout << minimum << " is minimum amongst "<< a << " " << b << " " << c << endl;

    return 0;
} 