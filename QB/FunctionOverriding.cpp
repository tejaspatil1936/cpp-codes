#include <bits/stdc++.h>
using namespace std;

class A
{
public:
    void information()
    {
        cout << "class A is executed " << endl;
    }
};

class B : public A
{
public:
    void information()
    {
        cout << "class B is executed" << endl;
    }
};

int main()
{
    A a;
    a.information();

    B b;
    b.information();

    return 0;
}