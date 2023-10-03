#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main(int argc, char const *argv[])
{
    string k;
    cout<<"Enter the binary: ";
    cin>>k;
    string s="";
    int dec=0;
    int power;
    int base=1;
    int oct;
    for(int i=0;i<k.length();i++){
         s=k[i];
         int c=stoi(s);
         power=k.length()-i-1;
         dec=dec+c*pow(2,power);
    }

    while(dec>0){
        int rem=dec%8;
        oct=oct+rem*base;
        dec=dec/8;
        base=base*10;

    }

    cout<<"Octal value is: "<<oct;
    

    return 0;
}
