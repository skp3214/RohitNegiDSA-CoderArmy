#include <iostream>
using namespace std;
#include <string>

// Base class
class Vehicle
{
public:

    Vehicle(const string &brand) : brand(brand) {}            // Constructor

    void start()                                              // Member function
    {
        cout << "Starting the " << brand << " vehicle." << endl;
    }
                                                      // Member function          
    void stop()
    {
        cout << "Stopping the " << brand << " vehicle." << endl;
    }

    string getBrand() const
    {
        return brand;
    }

private:
    string brand;                                     // Member variable
};

// Derived class
class Car : public Vehicle
{
public:
    Car(const string &brand, const string &model) : Vehicle(brand), model(model) {}                    // Constructor

    void drive()                                                             // Additional member function
    {
        cout << "Driving the " << getBrand() << " " << model << " car." << endl;
    }

private:
    string model;                                             // Additional member variable
};

int main()
{
    Car myCar("Toyota", "Camry");                              // Create an instance of the Car class
    
    myCar.start();                                               // Access inherited member functions from the base class
    myCar.stop();
    myCar.drive();                                             // Access member functions and variables specific to the derived class

    return 0;
}
