#include <iostream>
#include <string>
using namespace std;

class Pet {
public:
    Pet(string name, string color) {
        this->name = name;
        this->color = color;
        happiness = 50;
    }

    void eat() {
        happiness += 10;
        cout << name << " is eating and feeling happier!" << endl;
    }

    void sleep() {
        happiness += 5;
        cout << name << " is sleeping and getting some rest." << endl;
    }

    void play() {
        happiness += 20;
        cout << name << " is playing and having fun!" << endl;
    }

    void displayHappiness() {
        cout << name << "'s happiness level is " << happiness << "." << endl;
    }

    // Getter method for name
    string getName() {
        return name;
    }

private:
    string name;
    string color;
    int happiness;
};

class SpecialPet : public Pet {
public:
    SpecialPet(string name, string color, string specialAbility)
        : Pet(name, color), specialAbility(specialAbility) {}

    void displaySpecialAbility() {
        cout << getName() << " has a special ability: " << specialAbility << "." << endl;
    }

private:
    string specialAbility;
};

int main() {
    Pet regularPet("Fluffy", "White");
    regularPet.eat();
    regularPet.displayHappiness();

    SpecialPet specialPet("Max", "Brown", "Can Fly");
    specialPet.play();
    specialPet.displayHappiness();
    specialPet.displaySpecialAbility();

    return 0;
}
