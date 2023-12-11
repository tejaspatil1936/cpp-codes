#include <iostream> 
#include<cmath>
using namespace std;

int main()
{
    int num, sunny_no, square;
    cout << "enter the number : ";
    cin >> num;
    
    int nextnum = num + 1;
    for(int i; i<=nextnum; i++)
    {
        if (i*i == nextnum)
        {
            sunny_no;
        }
    }
            
            if(sunny_no)
            {
            cout << "the number is sunny number ";
            }
            else
            {
                cout << "the number is not a sunny number ";
            }
    
    return 0;
}