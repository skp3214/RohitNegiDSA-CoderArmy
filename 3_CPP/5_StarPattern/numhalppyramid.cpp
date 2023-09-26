#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    for(int i=1;i<=6;i++){
        int k=10;
        for(int j=1;j<=i;j++){
            cout<<k<<" ";
            k++;
        }
        cout<<endl;
    }
    return 0;
}
