#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter Size of array: ";
    cin>>size;
    cout<<"Enter the array element: ";
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    int element;
    cout<<"Enter the element: ";
    cin>>element;

    for(int j=0;j<size;j++){
        if(arr[j]==element){
            cout<<"Element Found at Position:"<<j+1;
            return 0;
        }
        else{
            cout<<"-1"<<endl;
            return 0;
        }
    }

    return 0;
}
