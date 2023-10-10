#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cout<<"Enter the number: ";
    int arr[1000];
    cin>>n;
    arr[0]=0;
    arr[1]=1;
    for (int i = 2; i <n; i++){
        arr[i]=(arr[i-1]+arr[i-2]);
    }
    cout << "Fibonacci Number is: "<< arr[n-1];
    return 0;
}
