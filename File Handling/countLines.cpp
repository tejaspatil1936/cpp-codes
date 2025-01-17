#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file("example.txt");
    int count = 0;
    string line;
    while(getline(file, line)) count++;
    cout << "Total lines: " << count;
    return 0;
}