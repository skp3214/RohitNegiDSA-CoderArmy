// method 1:  with two argument
#include<iostream>
using namespace std;
void tableOfN(int n,int i){
    if(i>10) return;
    cout<<n<<" x "<<i<<" = "<<n*i<<endl;
    i++;
    tableOfN(n,i);
}
int main(int argc, char const *argv[])
{
    cout<<"Enter the number";
    int n;
    cin>>n;
    tableOfN(n,1);
    return 0;
}
