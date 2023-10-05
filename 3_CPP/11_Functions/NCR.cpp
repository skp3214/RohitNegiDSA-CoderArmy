#include<iostream>
using namespace std;

int factorial(int z){
    if (z==0)
    return 1;
    return z*factorial(z-1);
}

int nCr(int x,int y){
    int r;
    r=factorial(x)/(factorial(y)*factorial(x-y));
    return r;
}


int main(int argc, char const *argv[])
{
    cout<<"For nCr combination "<<endl;
    cout<<"Enter the value of n and r: ";
    int n,r;
    cin>>n>>r;
    int result=nCr(n,r);
    cout<<"nCr is: "<<result;
    return 0;
}
