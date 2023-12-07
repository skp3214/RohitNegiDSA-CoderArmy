#include<iostream>
using namespace std;
int cubeSum(int n){
    if(n<0) return 0;
    return n*n*n +cubeSum(n-1);
}
int main(int argc, char const *argv[])
{
    cout<<"Enter the number: ";
    int n;
    cin>>n;
    int result=cubeSum(n);
    cout<<result<<endl;
    return 0;
}
