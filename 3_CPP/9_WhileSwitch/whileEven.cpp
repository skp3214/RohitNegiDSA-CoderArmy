#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    cout<<"Enter the range for even number: ";
    int n;
    cin>>n;
    int k=1;
    while(k<=n){
        if(k%2==0){
            cout<<"\t"<<k;
        }
        k++;
    }

    return 0;
}
