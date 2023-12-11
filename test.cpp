// Header Files
#include <bits/stdc++.h>
#include <string>
#include <vector>
using namespace std;

/*
 *
 */
long long int factorial(int n)
{
    return (n == 1 || n == 0) ? 1 : n * factorial(n - 1);
}
int winGame(int n)
{
    long long int fact = factorial(n);

    string temp = to_string(fact);
    int siz = temp.size();
    int cnt = 0;

    for (int i = siz - 1; i >= 0; i++)
    {
        if (temp[i] == '0')
            cnt++;
        else
            break;
    }

    return cnt;
}
int main()
{
    // input for num
    int num;
    cin >> num;

    int result = winGame(num);
    cout << result;

    return 0;
}
