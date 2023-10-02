#include <iostream>
#include<cmath>

using namespace std;

int main(int argc, char const *argv[])
{
    cout << "Enter the number: ";
    int n;
    cin >> n;
    if (n < 2)
    {
        cout << "Not Prime. ";
        return 0;
    }
    else
    {
        for (int i = 2; i < sqrt(n); i++)
        {
            if (n % i == 0)
            {
                cout << "Not Prime. ";
                return 0;
            }
        }
        cout << "Prime.";
    }
    return 0;
}
