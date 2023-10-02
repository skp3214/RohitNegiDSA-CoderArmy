#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    cout<<"Enter the number for factorial: ";
    int n;
    cin>>n;
    int factorial=1;
    int k=1;
    while(k<=n){
        factorial*=k++;
    }
    cout<<factorial;
    return 0;
}
