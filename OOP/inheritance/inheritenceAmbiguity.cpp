

#include <iostream>
using namespace std;

class A
{
public:
    void abc()
    {
        cout << "Class A";
    } 
};

class B
{
public:
    void abc()
    {
        cout << "Class B";
    }
};

class C : public A, public B
{ 
public:
};

// Main Code
int main()
{
    C obj;
    // obj.abc(); 
    obj.A::abc(); // use scope resolution opreator to avoid ambiguity

    return 0;
}
