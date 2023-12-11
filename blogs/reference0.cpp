#include <bits/stdc++.h>
using namespace std;

int main()
{

    string food = "Pizza";
    string &meal = food;  // we used  & sign so meal will take address of pizza i.e. Pizza

    cout << food << "\n"; // outputs Pizza
    cout << meal << "\n"; // outputs pizza
    cout << &food;        // outputs hexadecimal value as &food will take memory address of Pizza

    return 0;
}