#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int arr[] = {9,8,7,6,5,1,2,3,4};
    for(int i=0;i<=7;i++){
        for(int j=0;j<8-i;j++){
            if(arr[j]<arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }

    for(int k=0;k<9;k++){
        cout<<arr[k];
    }
    return 0;
}
