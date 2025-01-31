#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cout << "enter the string : ";
    cin >> s;
    map<char, int> mp;

    for (int i = 0; i < s.size(); i++)
    {
        mp[s[i]]++;
    }

    int q;
    cout << "enter the no of queries : ";
    cin >> q;

    while (q--)
    {
        char ch;
        cout << "enter the charater : ";
        cin >> ch;
        cout << mp[ch] << endl;
    }

    return 0;
}

