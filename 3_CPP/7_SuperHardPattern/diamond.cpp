#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5-i;j++){
            cout<<" ";
        }
        for(int k=1;k<=i;k++){
            cout<< " *";
        }
        cout << endl;
        
    }
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i-1;j++){
            cout<<" ";
        }
        for(int k=1;k<=6-i;k++){
            cout<< " *";
        }
        cout << endl;
        
    }
    return 0;
}
