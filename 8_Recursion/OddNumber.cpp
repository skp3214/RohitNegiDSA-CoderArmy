#include<iostream>
using namespace std;
void printOddNumber(int n){
    if(n>0){
        if(n%2!=0){
        cout<<"The odd number is "<<n<<endl;
    }
        printOddNumber(n-1);
    }
}
int main(int argc, char const *argv[])
{
    cout<<"Enter the number: "<<endl;
    int n;
    cin>>n;
    printOddNumber(n);
    return 0;
}
