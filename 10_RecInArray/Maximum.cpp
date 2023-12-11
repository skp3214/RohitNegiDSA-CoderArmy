#include<iostream>
using namespace std;
int maximum(int arr[], int i){
    if(i==0) return arr[0];
    
    return max(arr[i], maximum(arr, i-1));
}
int main(int argc, char const *argv[])
{
    
    int arr[]={5,2,1,4,6,7,8};
    cout<< maximum(arr,6);
    return 0;
}
