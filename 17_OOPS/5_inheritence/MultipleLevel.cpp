#include <iostream>
#include <string>
using namespace std;

// First base class
class Engine
{
public:
    void start()
    {
        cout << "Engine started." << endl;
    }

    void stop()
    {
        cout << "Engine stopped." << endl;
    }
};

// Second base class
class Wheels
{
public:
    void accelerate()
    {
        cout << "Accelerating the wheels." << endl;
    }

    void brake()
    {
        cout << "Applying brakes." << endl;
    }
};

// Derived class with multiple inheritance
class Car : public Engine, public Wheels
{
public:
    void drive()
    {
        cout << "Car is in motion." << endl;
    }
};

int main()
{

    Car myCar;

    myCar.start();      // From Engine
    myCar.accelerate(); // From Wheels
    myCar.drive();      // From Car

    myCar.stop();  // From Engine
    myCar.brake(); // From Wheels

    return 0;
}
