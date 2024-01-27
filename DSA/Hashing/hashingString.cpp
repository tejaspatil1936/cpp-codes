#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cout << "enter the string : ";
    cin >> s;

    int hash[26] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        hash[s[i] - 'a']++;
    }

    int queries;
    cout << "enter the no of queries : ";
    cin >> queries;
    while (queries--)
    {
        char c;
        cout << "enter the character : ";
        cin >> c;
        cout << hash[c-'a'] << endl;
    }

    return 0;
}