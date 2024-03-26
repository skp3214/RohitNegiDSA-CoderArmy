#include <iostream>
using namespace std;
class MinHeap
{
    int total_size;

public:
    int *arr;
    int size;
    MinHeap(int n)
    {
        arr = new int[n];
        size = 0;
        total_size = n;
    }

    void insert(int value)
    {
        if (size == total_size)
        {
            cout << "Heap Over Flow" << endl;
            return;
        }
        arr[size] = value;
        int index = size;
        size++;

        // compare it with it's parent
        while (index > 0 && arr[(index - 1) / 2] > arr[index])
        {
            swap(arr[index], arr[(index - 1) / 2]);
            index = (index - 1) / 2;
        }
    };
    void Delete()
    {
        if (size == 0)
        {
            cout << "Heap Underflow" << endl;
            return;
        }
        arr[0] = arr[size - 1];
        size--;
        if (size == 0)
        {
            return;
        }
        else
        {
            HeapiFy(0);
        }
    }
    void HeapiFy(int index)
    {
        int largest = index;
        int left = 2 * index + 1;
        int right = 2 * index + 2;

        if (left < size && arr[left] < arr[largest])
        {
            largest = left;
        }
        if (right < size && arr[right] < arr[largest])
        {
            largest = right;
        }
        if (largest != index)
        {
            swap(arr[largest], arr[index]);
            HeapiFy(largest);
        }
    }
};
int main(int argc, char const *argv[])
{
    MinHeap H1(6);
    H1.insert(4);
    H1.insert(144);
    H1.insert(11);
    H1.insert(5);
    H1.insert(98);
    H1.insert(145);

    cout << "The elements in the heap are : ";
    for (int i = 0; i < H1.size; ++i)
    {
        cout << H1.arr[i] << " ";
    }
    cout << endl;
    cout << "Removing maximum element from heap: " << endl;
    H1.Delete();
    cout << "New heap after deleting max element is : ";
    for (int i = 0; i < H1.size; ++i)
    {
        cout << H1.arr[i] << " ";
    }

    return 0;
}
