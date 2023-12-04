#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n = 10; 
    int *p=&n;
    int **ptr=&p;
    cout<<p<<endl;
    cout<<*p<<endl;
    cout<<" "<<endl;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    cout<<**ptr<<endl;

    return 0;
}
