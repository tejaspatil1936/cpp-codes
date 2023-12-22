// Q no 6
#include <bits/stdc++.h>
using namespace std;

class ClassA {
public:
    void displayA() {
        cout << "Class A" << endl;
    }
};

class ClassB {
public:
    void displayB() {
        cout << "Class B" << endl;
    }
};

class ClassC : public ClassA, public ClassB {
public:
    void displayC() {
        cout << "Class C" << endl;
    }
};

int main() {
    ClassC obj;

    // Calling methods from both base classes
    obj.displayA();
    obj.displayB();

    // Calling method of derived class
    obj.displayC();

    return 0;
}
