#include <iostream>
#include <string>
using namespace std;

// Base class
class Shape {
public:
    // Virtual function for area calculation
    virtual double calculateArea() const {
        cout << "Calculating area of the base shape." << endl;
        return 0.0;
    }
};

// Derived class 1
class Circle : public Shape {
private:
    double radius;

public:
    // Constructor
    Circle(double r) : radius(r) {}

    // Overridden virtual function
    double calculateArea() const override {
        cout << "Calculating area of the circle." << endl;
        return 3.14 * radius * radius;
    }
};

// Derived class 2
class Square : public Shape {
private:
    double side;

public:
    // Constructor
    Square(double s) : side(s) {}

    // Overridden virtual function
    double calculateArea() const override {
        cout << "Calculating area of the square." << endl;
        return side * side;
    }
};

// Function that uses polymorphism
void printArea(const Shape& shape) {
    cout << "Area: " << shape.calculateArea() << endl;
}

int main() {
    // Create instances of derived classes
    Circle myCircle(5.0);
    Square mySquare(4.0);

    // Use polymorphism to calculate and print areas
    printArea(myCircle);
    printArea(mySquare);

    return 0;
}
