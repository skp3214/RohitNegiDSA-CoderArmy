#include<iostream>
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

void BuildMaxHeap(int arr[], int n)
{
    for (int i = (n / 2) - 1; i >= 0; i--)
    {
        Heapify(arr,i,n);
    }
}

void sortArray(int arr[],int n){
    for(int i=n-1;i>0;i--){
        swap(arr[i],arr[0]);
        Heapify(arr,0,i);
    }
}

void printHeap(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(int argc, char const *argv[])
{
    int arr[] = {10, 3, 8, 9, 5, 13, 18, 14, 11, 70};
    BuildMaxHeap(arr, 10);
    sortArray(arr,10);
    printHeap(arr, 10);
    return 0;
}

// #include <iostream>
// using namespace std;

// class MaxHeap
// {
//     int total_size;

//     public:
//     int *arr;
//     int size;

//     MaxHeap(int n)
//     {
//         arr = new int[n];
//         size = 0;
//         total_size = n;
//     }

//     void insert(int value)
//     {
//         if (size == total_size)
//         {
//             cout << "Heap Over Flow" << endl;
//             return;
//         }

//         size++;
//         int index = size - 1;
//         arr[index] = value;

//         heapify_up(index);
//     }

//     void Delete()
//     {
//         if (size == 0)
//         {
//             cout << "Heap Underflow" << endl;
//             return;
//         }

//         arr[0] = arr[size - 1];
//         size--;

//         if (size == 0)
//         {
//             return;
//         }
//         else
//         {
//             heapify(0);
//         }
//     }

//     void heapify(int index)
//     {
//         int largest = index;
//         int left = 2 * index + 1;
//         int right = 2 * index + 2;

//         if (left < size && arr[left] > arr[largest])
//         {
//             largest = left;
//         }

//         if (right < size && arr[right] > arr[largest])
//         {
//             largest = right;
//         }

//         if (largest != index)
//         {
//             swap(arr[largest], arr[index]);
//             heapify(largest);
//         }
//     }

//     void heapify_up(int index)
//     {
//         if (index == 0)
//         {
//             return;
//         }

//         int parent = (index - 1) / 2;

//         if (arr[parent] < arr[index])
//         {
//             swap(arr[parent], arr[index]);
//             heapify_up(parent);
//         }
//     }
// };

// int main(int argc, char const *argv[])
// {
//     MaxHeap H1(6);
//     H1.insert(4);
//     H1.insert(144);
//     H1.insert(11);
//     H1.insert(5);
//     H1.insert(98);
//     H1.insert(145);

//     cout << "The elements in the heap are : ";
//     for (int i = 0; i < H1.size; ++i)
//     {
//         cout << H1.arr[i] << " ";
//     }
//     cout << endl;

//     cout << "Removing maximum element from heap: " << endl;
//     H1.Delete();

//     cout << "New heap after deleting max element is : ";
//     for (int i = 0; i < H1.size; ++i)
//     {
//         cout << H1.arr[i] << " ";
//     }

//     return 0;
// }
