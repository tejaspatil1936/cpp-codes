#include <iostream>
using namespace std;

int main()
{
    int a = 2, b = 3;                                        // 8
    cout << (a + a++ + a) << "\n";                           // 16 
    cout << (a++ + a + a++ + a) << "\n";                     // 18
    cout << (a++ + b++ + a + b++) << "\n";                   // 14
    cout << (a++ + ++a) << "\n";                             // 52
    cout << (++a + b++ + a++ + ++a + a + ++b) << "\n";
}
