#include <bits/stdc++.h>
using namespace std;

int main()
{

    string food = "Pizza";
    string *ptr = &food;

    // Output the value of food
    cout << food << "\n";

    // Output the memory address of food
    cout << &food << "\n";

    // Access the memory address of food and output its value by dereferencing i.e. by using * before ptr
    cout << *ptr << "\n";

    // Change the value of the pointer by dereferencing i.e. by using * before ptr
    *ptr = "Hamburger";

    // Output the new value of the pointer
    cout << *ptr << "\n";

    // Output the new value of the food variable
    cout << food << "\n";
    return 0;
}