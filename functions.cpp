#include <iostream>
using namespace std;

int sum()
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    return a + b;
}

int main()
{
    int c;
    c = sum();
    cout << c;
    return 0;
}
