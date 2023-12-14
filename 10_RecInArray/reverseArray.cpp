#include<iostream>
using namespace std;

void reverseArray(int arr[],int start, int end){
    if(start>=end) return ;
    
    // int temp = arr[start];
    // arr[start] = arr[end];
    // arr[end] = temp;
    swap(arr[start],arr[end]);
    
    reverseArray(arr,start+1,end-1);
}

int main(int argc, char const *argv[])
{
    int arr[]={1,2,3,4,5,6,7,8,9};
    
    reverseArray(arr,0,8);
    cout<<"Reversed array is: ";
    for(int i=0;i<9;i++)
        cout << arr[i] << " ";

    return 0;
}
