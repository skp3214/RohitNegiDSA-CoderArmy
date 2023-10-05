#include<iostream>
using namespace std;
void abc(int &x, int &y, int &z){
    int temp=x;
    x=y;
    y=z;
    z=temp;
}
int main(int argc, char const *argv[])
{
    cout<<"Enter 3 numbers: ";
    int a,b,c;
    cin>>a>>b>>c;
    abc(a,b,c);
    cout<<"changed value is: "<<a<<" "<<b<<" "<<c;
    return 0;
}
