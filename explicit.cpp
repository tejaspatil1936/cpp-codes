#include <iostream>
using namespace std;

    int main()
    {
        int a = 45;
        float b = 45.54;


        int c = int(b);
        cout << "The value of c is : " << c << endl;
        cout << "the expression is : " << a + b << endl;
        cout << "the expression is : " << a + int(b) << endl;
        cout << "the expression is : " << a + (int)b << endl;

        return 0;
    }