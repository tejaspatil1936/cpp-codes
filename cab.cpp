#include <iostream>
#include <string>
using namespace std;

class mycar
{
    public:
    string brand;
    float power;

void myfunction()
{
    cout << power ;    
    cout << brand << "\n";
}
};
int main() {
     mycar santro;

    santro.brand = "hyundai";
    santro.power = 3.5;

    santro.myfunction();

    // cout << santro.brand << "\n";
    // cout << santro.power ;    
    return 0;
}

