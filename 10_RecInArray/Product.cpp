#include<iostream>
using namespace std;
int product(int arr[], int i){
    if(i==0) return arr[0];
    
    return arr[i] * product(arr, i-1);
}
int main(int argc, char const *argv[])
{
    int arr[]={5,2,1,4};
    cout<<product(arr,3);
    return 0;
}
