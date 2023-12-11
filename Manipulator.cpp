#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int a = 2;
    int b = 24;
    int c = 544;
    cout << "the value of a: " << a << endl;
    cout << "the value of b: " << b << endl;
    cout << "the value of c: " << c << endl;

    cout << "the value of a: " << setw(10) << a << endl;
    cout << "the value of b: " << setw(10) << b << endl;
    cout << "the value of c: " << setw(10) << c << endl;
}