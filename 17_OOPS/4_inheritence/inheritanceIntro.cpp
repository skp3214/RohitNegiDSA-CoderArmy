#include <iostream>
#include <string>
using namespace std;

// Base class (Parent class)
class Animal {
public:
    // Constructor
    string name;
    Animal(const string& name) : name(name) {}

    // Member function
    void eat() {
        cout << name << " is eating." << endl;
    }

    // Member function
    void sleep() {
        cout << name << " is sleeping." << endl;
    }


    // Member variable
};

// Derived class (Child class)
class Dog : public Animal {
public:
    // Additional member variable
    string breed;

    // Constructor
    Dog(const string& name, const string& breed) : Animal(name), breed(breed) {}

    // Additional member function
    void bark() {
        cout << name << " is barking." << endl;
    }
};

int main() {
    // Create an instance of the Dog class
    Dog myDog("Buddy", "Golden Retriever");

    // Access inherited member functions from the base class
    myDog.eat();
    myDog.sleep();

    // Access member functions and variables specific to the derived class
    myDog.bark();
    cout << "Breed: " << myDog.breed << endl;

    return 0;
}
