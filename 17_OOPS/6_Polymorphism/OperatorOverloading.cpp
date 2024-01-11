#include <iostream>
using namespace std;

class Complex {
public:
    // Constructors
    Complex() : real(0), imag(0) {}
    Complex(double r, double i) : real(r), imag(i) {}

    // Overloaded addition operator
    Complex operator+(const Complex& other) const {
        return Complex(real + other.real, imag + other.imag);
    }

    // Overloaded subtraction operator
    Complex operator-(const Complex& other) const {
        return Complex(real - other.real, imag - other.imag);
    }

    // Overloaded multiplication operator
    Complex operator*(const Complex& other) const {
        return Complex(real * other.real - imag * other.imag, real * other.imag + imag * other.real);
    }

    // Overloaded output stream operator
    // friend ostream& operator<<(ostream& os, const Complex& c) {
    //     os << c.real << " + " << c.imag << "i";
    //     return os;
    // }

    void Display(){
        cout << real<<" i" <<imag<< endl;

    }

private:
    double real;
    double imag;
};

int main() {
    // Create complex numbers
    Complex c1(2.0, 3.0);
    Complex c2(1.0, 2.0);

    // Perform operations using overloaded operators
    Complex sum = c1 + c2;
    Complex difference = c1 - c2;
    Complex product = c1 * c2;

    // Display the results
    // cout << "c1: " << c1 << endl;
    // cout << "c2: " << c2 << endl;
    // cout << "Sum: " << sum << endl;
    // cout << "Difference: " << difference << endl;
    cout << "Product: ";
    product.Display();

    return 0;
}
