#include <iostream>
using namespace std;
int main()
{
    float radius, volume;
    cout << "enter the value of radius:" << endl;
    cin >> radius;
    volume = 4 / 3 * 3.14 * radius * radius * radius;
    cout << "therefore the volume of sphere = " << volume << endl;
    return 0;
}