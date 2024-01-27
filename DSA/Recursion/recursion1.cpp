#include <bits/stdc++.h>
using namespace std;

int myCount = 0;

void print()
{
    if (myCount == 5)
    {
        return;
    }

    cout << "Hello, world!" << endl;
    myCount++;
    print();
}

int main()
{
    print();
    return 0;
}
