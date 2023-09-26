#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    for(char i=1;i<=5;i++){
        char k='A'+i-1;
        for(int j=1;j<=i;j++){
            cout<<k<<" ";
            
        }
        cout<<endl;
    }
    return 0;
}
