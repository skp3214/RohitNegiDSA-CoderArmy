#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    cout << "Enter the decimal number: ";
    int dec;
    cin >> dec;
    
    int ans = 0;
    int base = 1; 
    
    while (dec > 0) {
        int rem = dec % 2;
        ans = ans + rem * base;
        dec = dec / 2;
        base = base * 10;
    }

    cout << "Binary representation: " << ans << endl;
    
    return 0;
}
