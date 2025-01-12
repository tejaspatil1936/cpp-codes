#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("example.txt");
    if(file.is_open()) {
        file << "Hello, World!\nThis is a text file.";
        file.close();
        cout << "File created and written successfully!";
    } else {
        cerr << "Unable to create file!";
    }
    return 0;
}