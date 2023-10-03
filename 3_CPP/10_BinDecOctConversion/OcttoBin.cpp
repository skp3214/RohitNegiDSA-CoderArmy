#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main(int argc, char const *argv[])
{
    string k;
    cout<<"Enter the octal: ";
    cin>>k;
    string s="";
    int dec=0;
    int power;
    for(int i=0;i<k.length();i++){
         s=k[i];
         int c=stoi(s);
         power=k.length()-i-1;
         dec=dec+c*pow(8,power);
    }
    

    int base = 1; 
    int bin=0;
    while (dec > 0) {
        int rem = dec % 2;
        bin = bin + rem * base;
        dec = dec / 2;
        base = base * 10;
    }

    cout<<"Binary value is: "<<bin;
    
    return 0;
}
