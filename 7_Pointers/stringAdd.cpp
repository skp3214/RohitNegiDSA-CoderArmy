#include <iostream>
#include <string>
using namespace std;

int main() {

    string myString = "Hello, World!";

    cout<< "Address of the string: " << static_cast<void*>(myString.data()) <<endl;

    return 0;
}
