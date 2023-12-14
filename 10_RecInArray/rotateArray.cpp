#include <iostream>
using namespace std;

void rotateRight(int arr[], int n, int len) {
    if (n == 0)
        return;
    
    int last = arr[len - 1];
    
    for (int i = len - 1; i > 0; i--)
        arr[i] = arr[i - 1];

    arr[0] = last;
    
    rotateRight(arr, n - 1, len);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int rotateBy = 2;  
    
    cout << "Original array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    
    rotateRight(arr, rotateBy, n);
    cout << "Rotated array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    
    return 0;
}
