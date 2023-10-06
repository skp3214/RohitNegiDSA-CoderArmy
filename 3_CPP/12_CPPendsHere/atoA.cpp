#include<iostream>
using namespace std;
char convert(char x){
    return (x-'a'+'A');
}
int main(int argc, char const *argv[])
{
    cout<<"Enter the small alphabet: ";
    char a;
    cin>>a;
    char capital=convert(a);
    cout<<capital;
    return 0;
}
