#include <iostream>
#include <string>
using namespace std;

// Base class
class Vehicle
{
public:
    Vehicle(const string &type) : type(type) {}

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

// First derived class
class Car : public Vehicle
{
public:
    Car(const string &model) : Vehicle("Car"), model(model) {}

    void drive()
    {
        cout << "Driving the " << model << " car." << endl;
    }

private:
    string model;
};

// Second derived class
class Truck : public Vehicle
{
public:
    Truck(const string &brand) : Vehicle("Truck"), brand(brand) {}

    void haul()
    {
        cout << "Hauling goods with the " << brand << " truck." << endl;
    }

private:
    string brand;
};

int main()
{

    Car myCar("Sedan");
    Truck myTruck("Volvo");

    myCar.start();
    myCar.stop();

    myTruck.start();
    myTruck.stop();

    myCar.drive();
    myTruck.haul();

    return 0;
}
