#include <iostream>
using namespace std;
int BinarySearch(int arr[], int key)
{
    int start = 0;
    int end = 9;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            start = mid + 1;
        else
            end = mid - 1;
    }

    return -1;
}

int main(int argc, char const *argv[])
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    cout << "Enter the key: ";
    int key;
    cin >> key;

    int index = BinarySearch(arr, key);
    if (index != -1)
    {
        cout << "Element found at index " << index << endl;
    }
    else
    {
        cout << "Element not found in array." << endl;
    }
    return 0;
}
