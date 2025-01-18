#include <iostream>
#include <fstream>
using namespace std;

struct Person {
    char name[50];
    int age;
};

int main() {
    ofstream file("data.bin", ios::binary);
    Person p = {"Alice", 30};
    if(file.write(reinterpret_cast<char*>(&p), sizeof(p))) {
        cout << "Binary data written!";
    }
    file.close();
    return 0;
}