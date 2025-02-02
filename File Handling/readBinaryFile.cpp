#include <iostream>
#include <fstream>
using namespace std;

struct Person
{
    char name[50];
    int age;
};

int main()
{
    ifstream file("data.bin", ios::binary);
    Person p;
    if (file.read(reinterpret_cast<char *>(&p), sizeof(p)))
    {
        cout << "Name: " << p.name << "\nAge: " << p.age;
    }
    file.close();
    return 0;
}