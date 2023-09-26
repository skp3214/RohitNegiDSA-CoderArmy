#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    for(int i=1;i<=5;i++){
        for(int j=i;j>=1;j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}
