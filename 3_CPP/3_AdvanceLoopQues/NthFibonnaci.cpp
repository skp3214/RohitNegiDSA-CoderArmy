#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    cout<<"Enter the nth number: ";
    int n;
    cin>>n;
    int first=0;
    int second=1;
    int curr;
    if(n==1)cout<<first<<endl;
    else if(n==2)cout<<second<<endl;
    else{
        for(int i=3;i<=n;i++){
            curr=first+second;
            first=second;
            second=curr;
        }
        cout<<curr<<endl;
    }
    return 0;
}
