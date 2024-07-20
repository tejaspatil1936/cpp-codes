#include <bits/stdc++.h>
using namespace std;
int *fun(int *a)
{
    return &a;
}
int main()
{
    
    cout << fun(5) << endl;
    return 0;
}