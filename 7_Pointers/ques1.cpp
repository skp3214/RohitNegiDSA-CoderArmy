#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int num=10;
    int *p=&num;
    *p=*p+5;
    cout<<num; // Incremented by 5
    return 0;
}
