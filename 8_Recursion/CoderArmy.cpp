#include<iostream>
using namespace std;
void printCoderArmy(int n){
    if(n>0){
        cout<<"CoderArmy"<<endl;
        printCoderArmy(n-1);
    }
}
int main(int argc, char const *argv[])
{
    int n=10;
    printCoderArmy(n);
    return 0;
}
