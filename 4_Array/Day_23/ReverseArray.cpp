#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int array[6]={1,2,3,4,5,6};
    int reverse[6];
    for(int i=5,j=0;i>=0,j<=5;i--,j++){
        reverse[j]=array[i];
    }
    for(int k=0;k<=5;k++){
        cout<<reverse[k];
    }
    return 0;
}
