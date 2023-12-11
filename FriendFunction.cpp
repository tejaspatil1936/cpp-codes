#include <bits/stdc++.h>
using namespace std;
class shraavniii                             // declaration of class
{
    private:
    int money = 100;                        
    friend void ttejuu(shraavniii);          // friend function declaration
};

void ttejuu(shraavniii s)                    // defining friend function        
{
    cout << "money before spending : " << s.money << endl;
    cout << "money after spending : " << s.money - 40 << endl;
}
int main()
{
    ttejuu(s);                               // calling ttejuu function 
    return 0;
}
