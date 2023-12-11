#include <bits/stdc++.h>
using namespace std;

int main()
{
    char a;
    cout << "enter a charcater \n";
    cin >> a;
    if (a >= 97 && a <= 122)
    {
        cout << "small "<< endl;
    }
    else if (a >= 65 && a <= 90)
    {
        cout << "capital "<< endl;
    }
    else
    {
        cout << "invalid character " << endl;
    }
    

    return 0;
}