#include <iostream>
#include <string>
using namespace std;

// Base class
class Shape
{
public:
    // Function for drawing a generic shape
    void draw() const
    {
        cout << "Drawing a shape." << endl;
    }

    // Function for drawing a shape with a specific color
    void draw(const string &color) const
    {
        cout << "Drawing a " << color << " shape." << endl;
    }
};

// Derived class
class Circle : public Shape
{
public:
    // Overloaded function for drawing a circle
    void draw() const
    {
        cout << "Drawing a circle." << endl;
    }
    void draw(const string &color) const
    {
        cout << "Drawing a " << color << " shape." << endl;
    }
};

int main()
{
    // Create instances of base and derived classes
    Shape baseShape;
    Circle myCircle;

    // Call the overloaded draw functions
    baseShape.draw();      // Calls Shape::draw()
    baseShape.draw("red"); // Calls Shape::draw(const string&)
    myCircle.draw();       // Calls Circle::draw()
    myCircle.draw("blue"); // Calls Shape::draw(const string&)

    return 0;
}
