#include<iostream>
using namespace std;
int reverse(int x){
    int ans=0;
    while (x!= 0) {
        int rem=x%10;
        x=x/10;
        ans=ans*10+rem;
    }

    return ans;
        
}
int main(int argc, char const *argv[])
{
    cout<<"Enter the number: ";
    int n;
    cin>>n;
    if(n>=-5000 && n<=500){
        int result=reverse(n);
        cout<<"Reverse is: "<<result;
    }
    return 0;
}
