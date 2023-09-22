#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    cout << "Enter the two  numbers: ";
    int a, b;
    cin >> a >> b;
    if (a > b)
    {
        cout << "The greater number is " << a;
    }
    else
    {
        cout << "The greater number is " << b;
    }
    return 0;
}
