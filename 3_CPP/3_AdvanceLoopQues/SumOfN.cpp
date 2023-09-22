#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    cout<<"Enter the number: ";
    int n;
    cin>>n;
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    cout<<"Sum is : "<<sum;
    return 0;
}
