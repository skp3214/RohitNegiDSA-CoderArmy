#include <iostream>
using namespace std;
int binarySearch(int arr[], int low, int high, int x)
{
    if (low <= high)
    {
        int mid = (high + low) / 2;

        if (arr[mid] == x)
            return mid;
        if (arr[mid] > x)
            return binarySearch(arr, low, mid - 1, x);

        return binarySearch(arr, mid + 1, high, x);
    }
    return -1;
}
int main(int argc, char const *argv[])
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
    int x;
    cout << "Enter a number to search for: ";
    cin >> x;
    int low = 0;
    int high = 12;
    int result = binarySearch(arr, low, high, x);
    if (result != -1)
    cout << "Element is present at index " << result;
    else
    cout << "Element is not present in array";

    return 0;
}
