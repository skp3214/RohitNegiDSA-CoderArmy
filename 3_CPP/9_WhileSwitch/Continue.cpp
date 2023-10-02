// 3: Given a number n, print all the numbers from 1 to n(inclusive) which are not divisible by 3 and 5. (use Continue here).

#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    cout<<"Enter the range: ";
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        if(i%3==0||i%5==0){
            continue;
        }
        else{
            cout<<i<<" ";
        }
    }
    return 0;
}
