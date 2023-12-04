#include<iostream>
using namespace std;
void concatenateAndPrint(char *str1, const char*str2){
    while(*str1){
        str1++;
    }
    while((*str1=*str2)){
        str1++;
        str2++;
    }
}
int main(int argc, char const *argv[])
{
    char first[]="Good";
    const char second[]="Morning";
    concatenateAndPrint(first,second);
    cout<<first;
    return 0;
}
