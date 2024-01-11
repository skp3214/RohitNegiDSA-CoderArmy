#include <iostream>
using namespace std;

int main() {
    try {
      
        int numerator, denominator, result;
        
        cout << "Enter numerator: ";
        cin >> numerator;

        cout << "Enter denominator: ";
        cin >> denominator;

        if (denominator == 0) {
            
            throw runtime_error("Division by zero is not allowed");
        }

        result = numerator / denominator;

        // The following code will not be executed if an exception is thrown
        cout << "Result of division: " << result << endl;
    }
    catch (const exception& ex) {
        // Catch the exception and handle it
        cerr << "Exception caught: " << ex.what() << endl;
    }
    catch (...) {
        // Catch any other unhandled exceptions
        cerr << "An unknown exception occurred." << endl;
    }

    return 0;
}
