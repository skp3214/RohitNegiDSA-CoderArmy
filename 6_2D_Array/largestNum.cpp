#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int arr[3][3]={
        {10,20,30},
        {40,5,60},
        {70,80,90}
    };
    int min=INT_MAX;
    for(int i=0;i<3;i++){
        for (int j = 0; j < 3; ++j){
            if(arr[i][j]<min){
                min=arr[i][j];
            }
        }
    }

    cout<<"MIN: "<<min;
    return 0;
}
