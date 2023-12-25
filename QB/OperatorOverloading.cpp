// Q no 1
// Unary Operator overloaobjing
#include <bits/stdc++.h>
using namespace std;
class Demo
{
private:
    int a, b;

public:
    Demo(int x, int y)
    {
        a = x;
        b = y;
    }
    void show()
    {
        cout << "A = " << a << endl;
        cout << "B = " << b << endl;
    }
    void operator -()
    {
        a = a+b;
        b = a*b;
    }
};

int main()
{
    Demo obj(10, 20);
    cout << "before calling " << endl;
    obj.show();
    -obj;
    cout << "after calling" << endl;
    obj.show();
    return 0;
}