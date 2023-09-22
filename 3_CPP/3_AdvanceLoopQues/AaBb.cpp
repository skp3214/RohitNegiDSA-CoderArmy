#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    cout << "Printing A to Z: ";
    for (char i = 'A'; i <= 'Z'; ++i)
    {
        cout << i << "  ";
    }
    
    cout << "\n";

    cout << "Printing Z to A: ";
    for (char i = 'Z'; i >= 'A'; --i)
    {
        cout << i << "  ";
    }

   return 0;
}
