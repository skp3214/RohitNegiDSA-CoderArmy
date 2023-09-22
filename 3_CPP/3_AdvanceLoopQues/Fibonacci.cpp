#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    cout << "Enter the number: ";
    int n;
    cin >> n;
    int last = 0;
    int prev = 1;
    int curr;
    if (n == 1)
    {
        cout << 0 << endl;
    }
    else if (n == 2)
    {
        cout << 0 << endl;
        cout << 1 << endl;
    }
    else
    {
        cout << 0 << endl;
        cout << 1 << endl;
        for (int i = 3; i <= n; i++)
        {
            curr = last + prev;
            cout << curr << endl;
            last = prev;
            prev = curr;
        }
    }

    return 0;
}
