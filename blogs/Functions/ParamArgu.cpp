// syntax :
// void functionName(parameter1, parameter2, parameter3) {
// code to be executed
// }

// When a parameter is passed to the function,
// it is called an argument.

//  arguments act as inputs in functions from the users in C++

#include <iostream>
#include <string>
using namespace std;

void myFunction(string fname)
{
    cout << fname << " Refsnes\n";
}

int main()
{
    myFunction("Liam");
    myFunction("Jenny");
    myFunction("Anja");
    return 0;
}
