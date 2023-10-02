// 6: Give a number n, find if it is prime or not, use a while loop and break here to solve it.



#include<iostream>
#include<cmath>
using namespace std;

int main(int argc, char const *argv[])
{
    cout<<"Enter the number to check prime or not: ";
    int num;
    int i=2;
    cin>>num;
    if(num>0 && num<=3){
        cout<<"Prime";
    }
    else{
        while(i<=sqrt(num)){
            if(num%i==0){
                cout<<"Not Prime\n";
                break;
            }
            else{
                cout<<"Prime";
                break;
            }
            i++;
        }
    }
    
    return 0;
}
