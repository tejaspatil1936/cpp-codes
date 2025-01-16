#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    if(remove("example.txt") == 0) {
        cout << "File deleted successfully!";
    } else {
        perror("Error deleting file");
    }
    return 0;
}