#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream file("example.txt", ios::ate | ios::binary);
    if (file.is_open())
    {
        cout << "File size: " << file.tellg() << " bytes";
        file.close();
    }
    return 0;
}