// method 2: with argument 1

#include<iostream>
using namespace std;
void tableOfN(int n){
    static int i=1;
    if(i>10) return;
    cout<<n<<" x "<<i<<" = "<<n*i<<endl;
    i++;
    tableOfN(n);
}
int main(int argc, char const *argv[])
{
    cout<<"Enter the number";
    int n;
    cin>>n;
    tableOfN(n);
    return 0;
}