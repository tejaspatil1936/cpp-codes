#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    if(rename("old.txt", "new.txt") == 0) {
        cout << "File renamed!";
    } else {
        perror("Error renaming");
    }
    return 0;
}