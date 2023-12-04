#include<iostream>
using namespace std;
void modifyString(char *str){
    while(*str){
        if(*str>='a' && *str<='z'){
            *str=*str-'a'+'A';
        }
        str++;
    }
}
int main(int argc, char const *argv[])
{
    char myString[]="Hello World";
    modifyString(myString);
    cout<<"Modified String: "<<myString<<endl;
    return 0;
}
