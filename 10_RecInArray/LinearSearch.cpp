#include <iostream>
using namespace std;
bool linearSearch(int arr[], int x, int N)
{
    if (0 == N)
        return 0;

    if (arr[N] == x)
    {
        return 1;
    }
    return linearSearch(arr, x, N-1);
}
int main(int argc, char const *argv[])
{
    int arr[] = {4, 5, 6, 1, 2, 3, 7, 8, 9};
    int x;
    cout << "Enter the element to search: ";
    cin >> x;
    bool ans = linearSearch(arr, x, 9);
    if (ans)
    {
        cout << "Element is present" << endl;
    }
    else
    {
        cout << "Element is not present" << endl;
    }
    return 0;
}
