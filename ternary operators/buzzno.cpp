#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;

    cout << "enter a number: ";
    cin >> num;

    string isbuzznumber = (num % 7 == 0 || num % 10 == 7) ? "is a buzz number" : "is not a buzz number";

    cout << num << " " << isbuzznumber << endl;

    return 0;
}