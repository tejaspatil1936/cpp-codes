#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, r;
    int found = 0;
    cin >> n;

    while (n > 0)
    {
        r = n % 10;
        if (r == 0)
        {
            found++;
        }
        n = n / 10;
    }

    if (found != 0)
    {
        cout << "it is a duck no\n";
    }
    else
    {
        cout << "it is not a duck no\n";
    }

    return 0;
}
