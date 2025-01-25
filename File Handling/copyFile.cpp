#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream src("source.txt", ios::binary);
    ofstream dest("dest.txt", ios::binary);
    dest << src.rdbuf();
    cout << "File copied!";
    return 0;
}