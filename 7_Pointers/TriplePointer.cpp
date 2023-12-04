#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n=5;
    int *p=&n;
    int **p1=&p;
    int ***p2=&p1;
    cout<<"Value of p="<<*p<<endl;
    cout<<"Address of p="<<p<<endl;
    cout<<"Value of p1="<<**p1<<endl;
    cout<<"Address of p1="<<p1<<endl;
    cout<<"Value of p2="<<***p2<<endl;
    cout<<"Address of p2="<<&p2<<endl;
    ***p2=***p2+3;
    cout<<"New Value of p2="<<n<<endl;
    cout<<"New Value of p2="<<***p2<<endl;
    
    return 0;
}
