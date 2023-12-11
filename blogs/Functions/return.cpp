
#include <bits/stdc++.h>
using namespace std;

int sumFunction(int x, int y)
{
    return x + y;
}

int myFunction(int z)
{
    return 5 + z;
}

int SumAssign(int a, int b)
{
    return a + b;
}

int main()
{
    cout << sumFunction(10, 20) << endl;
    cout << myFunction(5) << endl;

    int c = SumAssign(10, 10);
    cout << c << endl;

    return 0;
}