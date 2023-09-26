#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    for(int i=1;i<=4;i++){
        char k='A';
        for(int j=5-i;j>=1;j--){
            cout<<k<<" ";
            k++;
        }
        cout<<endl;
    }
    return 0;
}
