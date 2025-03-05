#include <bits/stdc++.h>
using namespace std;
// for this recursion we will get
// Segmentation fault (core dumped)
// because there is no termination condition memory stack will get overflowed
void print()
{
    cout << "Hello, World !" << endl;
    print();
}
int main()
{
    print();
    return 0;
}
// refer recursion1.cpp for correct code