#include <iostream>
#include <fstream>
using namespace std;

bool fileExists(const string& filename) {
    ifstream file(filename);
    return file.good();
}

int main() {
    string filename = "example.txt";
    cout << "File " << (fileExists(filename) ? "exists" : "doesn't exist");
    return 0;
}