#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    for(int i=1;i<=6;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}
