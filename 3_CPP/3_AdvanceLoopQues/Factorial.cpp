#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    cout<<"Enter the number you want to find the factorial:  ";
    int n;
    cin>>n;
    int factorial=1;
    for(int i=1;i<=n;i++){
        factorial*=i;
    }
    cout<<"The Factorial of "<<n<<" is :"<<factorial;
    return 0;
}
