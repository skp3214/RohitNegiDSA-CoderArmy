#include <iostream>
using namespace std;


void Heapify(int arr[],int index,int n){
    int largest=index;
    int left = 2*index +1 ;
    int right = 2*index +2 ;
    
    if (left < n && arr[largest] < arr[left])
        largest = left;
  
    if (right < n && arr[largest] < arr[right])
        largest = right;
  
    if (largest != index) {
        swap(arr[index], arr[largest]);
        Heapify(arr, largest, n);
    }
}

void printHeap(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void BuildMaxHeap(int arr[], int n)
{
    // step down approach
    for (int i = (n / 2) - 1; i >= 0; i--)
    {
        Heapify(arr,i,n);
    }
}

int main(int argc, char const *argv[])
{
    int arr[] = {10, 3, 8, 9, 5, 13, 18, 14, 11, 70};
    BuildMaxHeap(arr, 10);
    printHeap(arr, 10);
    return 0;
}
