#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    cout << "Enter the number for factorial: ";
    int n;
    cin >> n;
    int factorial = 1;
    int k = 1;
    do
    {
        factorial *= k++;
    } while (k <= n);
    cout << factorial;
    return 0;
}
