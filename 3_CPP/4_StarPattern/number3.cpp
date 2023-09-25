#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int count=1;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++,count++){
            cout<<count<<" ";
        }
        cout<<endl;
    }
    return 0;
}
