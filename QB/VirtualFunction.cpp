#include <bits/stdc++.h>
using namespace std;

// Base class
class Animal
{
public:
    // Virtual function
    virtual void makeSound()
    {
        cout << "Some sound\n";
    }
};

// Derived class 1
class Dog : public Animal
{
public:
    // Override the virtual function
    void makeSound() override
    {
        cout << "bhaw bhaw\n";
    }
};

// Derived class 2
class Cat : public Animal
{
public:
    // Override the virtual function
    void makeSound() override
    {
        cout << "Meow!\n";
    }
};

int main()
{
    // Create objects of different classes
    Animal animal;
    Dog dog;
    Cat cat;

    // Call the virtual function on each object
    animal.makeSound(); // Output: Some generic sound
    dog.makeSound();    // Output: Woof! Woof!
    cat.makeSound();    // Output: Meow!

    return 0;
}
