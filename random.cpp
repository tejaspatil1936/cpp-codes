#include <bits/stdc++.h>
using namespace std;

int main()
{
  
    int *A = new int(10);
    cout << &A;
    cout << endl;
    cout << A;
    cout << endl;
    cout << *A;
    cout << endl;
    delete A;
    cout << *A;
    cout << endl;

    return 0;
}