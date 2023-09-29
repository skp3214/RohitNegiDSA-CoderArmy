#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    cout<<"Enter the number: ";
    int num;
    cin>>num;
    if(num>0 && num%2==0){
        cout<<"Yes, Even and Positive. ";
    }
    else{
        cout<<"No";
    }
    return 0;
}
