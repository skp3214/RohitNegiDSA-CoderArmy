#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int array[7]={1,2,3,4,5,6,7};
    int start=0,end=6;
    while(start!=end){
        swap(array[start],array[end]);
        start++;
        end--;

    }
    for(int k=0;k<=6;k++){
        cout<<array[k];
    }
    return 0;
}
