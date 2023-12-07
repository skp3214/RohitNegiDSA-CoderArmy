#include<iostream>
using namespace std;

int factorial(int n){
    if (n == 0) return 1;
    else return n * factorial(n-1);
}

int main(int argc, char const *argv[])
{
    cout<<"enter the number: ";
    int n;
    cin>>n;
    int fact=factorial(n);
    cout<<fact<<endl;
    return 0;
}
