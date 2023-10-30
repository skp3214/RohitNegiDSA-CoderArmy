// Converting 1d array into 2d array.


#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int arr[9]={1,2,3,4,5,6,7,8,9};
    int arr2[3][3];
    for(int i=0;i<9;i++){
        arr2[i/3][i%3]=arr[i];
    }
    cout<<"The 2D array is : "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }
          

    return 0;
}

// int row_index=indexOf1Darray/col;
// int col_index=indexOf1Darray%col;

// arr2[row_index][col_index];
