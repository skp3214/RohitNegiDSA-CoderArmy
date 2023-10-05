#include<iostream>
using namespace std;

void swapNum(int &x,int &y){
    x=x+y;
    y=x-y;
    x=x-y;
}

int main(int argc, char const *argv[])
{
    cout<<"Enter the 2 number: ";
    int a,b;
    cin>>a>>b;
    swapNum(a,b);
    cout<<"after swap a= "<<a<<" b= "<<b;
    return 0;
}
