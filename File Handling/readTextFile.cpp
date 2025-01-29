#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream file("example.txt");
    string line;
    if (file.is_open())
    {
        while (getline(file, line))
        {
            cout << line << endl;
        }
        file.close();
    }
    else
    {
        cerr << "Unable to open file!";
    }
    return 0;
}