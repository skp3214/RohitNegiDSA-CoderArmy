#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cout<<"Enter the number upto which you want to print the number divisible by 4: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        if(i%4==0){
            cout<<i<<endl;
        }
    }
    return 0;
}
