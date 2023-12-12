#include<iostream>
using namespace std;
int noOfConsonants(string s,int n){
    if(n==0){
        return !(s[n] == 'a' || s[n] == 'e' || s[n] == 'i' || s[n] == 'o' || s[n] == 'u' || s[n] == 'A' || s[n] == 'E' || s[n] == 'I' || s[n] == 'O' || s[n] == 'U');
    }

    return noOfConsonants(s,n-1)+ !(s[n] == 'a' || s[n] == 'e' || s[n] == 'i' || s[n] == 'o' || s[n] == 'u' || s[n] == 'A' || s[n] == 'E' || s[n] == 'I' || s[n] == 'O' || s[n] == 'U');
}
int main(int argc, char const *argv[])
{
    string s="Sachin";
    cout<<"Number of consonants in the word 'Sachin' is : "<<noOfConsonants(s,s.length()-1)<<endl;
    return 0;
}
