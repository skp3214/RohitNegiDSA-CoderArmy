#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    for(int i=1;i<=5;i++){
        char m='A'+i-1;
        for(int j=1;j<=5-i;j++){
            cout<<"  ";
        }
        for(int k=i;k>=1;k--){
            cout<<m<<" ";
        }
        cout<<endl;
    }
    return 0;
}