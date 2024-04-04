#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int array[n];
    map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
        mp[array[i]]++;
    }

    int q;
    cout << "enter the no of queries : " << endl;
    cin >> q;
    while (q--)
    {
        int num;
        cin >> num;
        cout << mp[num] << endl;
    }
    return 0;
}