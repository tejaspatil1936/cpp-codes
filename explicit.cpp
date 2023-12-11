#include <iostream>
using namespace std;
// int main()
// {
    //     double x=1.2;

    //     int sum = (int)x + 1;
    //     cout<<"Sum= "<<sum;
    //     return 0;.
    // }
    int main()
    {
        int a = 45;
        float b = 45.54;
        /*

        cout<<"The value of a is : "<<(float)a<<endl;
        cout<<"The value of a is : "<<float(a)<<endl;

        cout<<"The value of a is : "<<(int)b<<endl;
        cout<<"The value of a is : "<<int(b)<<endl;
        */

        int c = int(b);
        cout << "The value of c is : " << c << endl;
        cout << "the expression is : " << a + b << endl;
        cout << "the expression is : " << a + int(b) << endl;
        cout << "the expression is : " << a + (int)b << endl;

        return 0;
    }