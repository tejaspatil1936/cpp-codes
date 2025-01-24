#include <iostream>
#include <fstream>
#include <exception>
using namespace std;

int main()
{
    try
    {
        ifstream file("nonexistent.txt");
        if (!file)
            throw runtime_error("File not found");
    }
    catch (const exception &e)
    {
        cerr << "Error: " << e.what();
    }
    return 0;
}