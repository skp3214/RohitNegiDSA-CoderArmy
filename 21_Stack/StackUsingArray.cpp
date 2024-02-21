#include <iostream>
using namespace std;

class Stack
{
    int top, size;
    float *arr;

public:
    // Constructor to create a stack of given size
    Stack(int s)
    {
        size = s;
        arr = new float[size];
        top = -1;
    }

    bool isEmpty()
    {
        return top == -1;
    }

    void push(float x)
    {
        if (top == size - 1)
        {
            cout << "Stack overflow \n";
            return;
        }
        arr[++top] = x;
    }

    float pop()
    {
        if (isEmpty())
        {
            cout << "Stack underflow \n";
            return -1;
        }
        return arr[top--];
    }
};

int main(int argc, char const *argv[])
{
    Stack stack(5);
    stack.push(7);
    stack.push(9);
    stack.push(4);
    stack.push(6);
    while(stack.isEmpty()==false){
        cout<<stack.pop()<<" ";
    }
   

    return 0;
}
