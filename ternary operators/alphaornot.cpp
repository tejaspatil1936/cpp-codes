#include <bits/stdc++.h>
using namespace std;

int main()
{
    char input;

    cout << "Enter the input : " << endl;
    
    cin >> input;

    cout << input << (input >= 'a' && input <= 'z' || input >= 'A' && input <= 'Z' ? " is alphabet \n" : " is not an alphabet\n");

    return 0;
}