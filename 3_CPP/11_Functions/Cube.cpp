#include<iostream>
using namespace std;

int cube(int x){
    return (x*x*x);
};

int main(int argc, char const *argv[])
{
    cout<<"Enter the number: ";
    int n;
    cin>>n;
    int result=cube(n);
    cout<<"Cube is: "<<result;
    return 0;
}
