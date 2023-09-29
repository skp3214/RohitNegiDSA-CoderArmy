#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    cout<<"Enter the temperature in Fahrenheit ";
    int temp;
    cin>>temp;
    if(temp>70 && temp<90){
        cout<<"Yes, Suitable for swimming.";
    }
    else{
        cout<<"No";
    }
    return 0;
}
