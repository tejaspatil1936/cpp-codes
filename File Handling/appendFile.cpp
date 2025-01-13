#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("example.txt", ios::app);
    if(file.is_open()) {
        file << "\nAppended text!";
        file.close();
        cout << "Text appended successfully!";
    } else {
        cerr << "Unable to open file!";
    }
    return 0;
}