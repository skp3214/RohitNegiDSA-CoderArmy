#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    cout << "Enter the 10 array element: ";
    int array[10];
    for (int i = 0; i < 10; i++)
    {
        cin >> array[i];
    }
    cout << "Enter the elements which index you want to find: ";
    int index;
    cin >> index;
    for (int j = 0; j < 10; j++)
    {
        if (array[j] == index)
        {
            cout << endl<< "The value is found at " << j + 1 << " position";
            break;
        }
    }

    return 0;
}
