#include<iostream>
using namespace std;

void coderArmy(){
    cout<<"Hello Coder Army"<<endl;
}
int main(int argc, char const *argv[])
{
    cout<<"Enter the number of times you want to print: ";
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        coderArmy();
    }
    return 0;
}
