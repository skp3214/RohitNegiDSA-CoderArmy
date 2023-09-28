#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5-i;j++){
            cout<<"  ";
        }
        for(int k=1;k<=2*i-1;k++){
            cout<<" "<<k;
        }
        cout << endl;
    }
    return 0;
}