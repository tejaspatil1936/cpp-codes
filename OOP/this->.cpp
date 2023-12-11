#include <bits/stdc++.h>
using namespace std;

class hero {
public:
    string name;
    float health;
    char level;

    // Constructor to initialize the hero's properties
    hero(string name, float health, char level) {
        this->name = name;
        this->health = health;
        this->level = level;
    }

    // Member function to display hero details
    void print() {
        cout << "Name: " << name << ", Health: " << health << ", Level: " << level << endl;
    }
};

int main(void) {
    hero h1("Spiderman", 90.0, 'A'); // Creating a hero object
    hero h2("Superman", 95.5, 'B');  // Creating another hero object

    h1.print();
    h2.print();

    return 0;
}
