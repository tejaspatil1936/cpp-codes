#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream file("example.txt");
    string search, line;
    cout << "Enter text to search: ";
    cin >> search;
    
    while(getline(file, line)) {
        if(line.find(search) != string::npos) {
            cout << "Text found!\n";
            return 0;
        }
    }
    cout << "Text not found!";
    return 0;
}