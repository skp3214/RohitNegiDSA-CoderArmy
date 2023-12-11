#include <iostream>
using namespace std;
int even(int arr[], int i){
    if(i==-1) return 0;
    
    return (arr[i]%2==0) + even(arr, i-1);    // checking for the condition
}
int main(int argc, char const *argv[])
{
    int arr[]={5,2,1,4,6,7,8};
    cout<<even(arr,6);
    return 0;
}
