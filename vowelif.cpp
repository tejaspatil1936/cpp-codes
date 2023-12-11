#include <bits/stdc++.h>
using namespace std;

int main()
{
    char alphabet, a, e, i, o, u, A, E, I, O, U;
    cout << "enter the alphabet ";
    cin >> alphabet;
    if (alphabet == a || alphabet == e || alphabet == i || alphabet == o || alphabet == u ||
        alphabet == A || alphabet == E || alphabet == I || alphabet == O || alphabet == U)
    {
        cout << "vovel \n";
    }
    else
    {
        cout << "consonant \n";
    }
    return 0;
}