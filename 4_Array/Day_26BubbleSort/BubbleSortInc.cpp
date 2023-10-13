#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int arr[] = {9,8,7,6,5,1,2,3,4};
    for(int i=7;i>=0;i--){
        for(int j=0;j<=i;j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
        }
    }
    }

    for(int k=0;k<9;k++){
        cout<<arr[k];
    }
    return 0;
}
