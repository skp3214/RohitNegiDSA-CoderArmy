#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a,b,c;
    cout<<"Enter the number a,b and c: ";
    cin>>a>>b>>c;
    if(a>=b || a>=c){
        cout<<"Yes a, is greater than b or c.";
    }
    else{
        cout<<"No.";
    }
    return 0;
}
