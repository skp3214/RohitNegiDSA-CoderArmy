#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{

    cout<<"Enter the number: ";
    int n;
    cin>>n;
    int sum=n*(n+1)*(2*n+1)/6;
    cout<<"Sum of "<<n<<" natural number is: "<<sum;

    return 0;
}
