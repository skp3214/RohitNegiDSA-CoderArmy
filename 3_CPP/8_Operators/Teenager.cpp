#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    cout<<"Enter the age: ";
    int age;
    cin>>age;
    if(age>=13 && age<=19){
        cout<<"You are a teenager.";
    }
    else{
        cout<<"No. ";
    }
    return 0;
}
