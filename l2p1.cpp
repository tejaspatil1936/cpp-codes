#include <bits/stdc++.h>
using namespace std;
int main()
{
    int p, n, r;
    cout << "enter principal amount :";
    cin >> p;
    cout << "enter rate of interset :";
    cin >> r;
    cout << "enter num of years :";
    cin >> n;
    int SI = (p * n * r) / 100;
    cout << "simple intrest is" << SI << endl;
    return 0;
}