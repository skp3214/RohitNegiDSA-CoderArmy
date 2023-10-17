#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int start = 0;
    int end = 8;
    int key;
    cout << "Enter the key: ";
    cin >> key;

    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == key)
        {
            cout << "Key found at index " << mid;
            break;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else if(arr[mid]<key)
        {
            start = mid + 1;
        }
        
    }
    return 0;
}
