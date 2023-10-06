#include<iostream>
#include<cmath>
using namespace std;

bool armStrongNum(int x,int digit){
   int ans=0;
   int temp=x;
   while(x){
     int rem=x%10;
     ans+=pow(rem,digit);
     x=x/10;
   }
   

   if(ans==temp){
    return 1;
   }
   else{
    return 0;
   }
}

int countDigit(int y){
    int count=0;
    while(y){
        count++;
        y=y/10;
    }
    return (count);
}

int main(int argc, char const *argv[])
{
    cout<<"Enter the number: ";
    int num;
    cin>>num;

    int digit=countDigit(num);

    bool ans=armStrongNum(num,digit);
    if(ans){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    return 0;
}
