#include <iostream>
#include <string>
using namespace std;

class Vehicle
{ // Base class
public:
    Vehicle(const string &type) : type(type) {} // Constructor

    void start()
    {
        cout << "Starting the " << type << " vehicle." << endl;
    }

    void stop()
    {
        cout << "Stopping the " << type << " vehicle." << endl;
    }

private:
    string type;
};

// Derived class
class Car : public Vehicle
{
public:
    Car(const string &type, const string &model) : Vehicle(type), model(model) {}

    void drive()
    {
        cout << "Driving the " << model << " car." << endl;
    }

private:
    string model;
};

// Further derived class (Multilevel inheritance)
class SportsCar : public Car
{
public:
    SportsCar(const string &type, const string &model, bool isConvertible)
        : Car(type, model), isConvertible(isConvertible) {}

    void accelerate()
    {
        cout << "Accelerating the sports car." << endl;
    }

private:
 
    bool isConvertible;
};

int main()
{
    
    SportsCar mySportsCar("Sports", "Porsche 911", true);

    
    mySportsCar.start();
    mySportsCar.stop();

    
    mySportsCar.drive();
    mySportsCar.accelerate();

    return 0;
}
