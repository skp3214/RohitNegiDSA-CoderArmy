#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    char arr[5]={'a','b','l','d','f'};
    char *ptr= &arr[0];
    cout<<"Address of array: " << ptr << endl;
    return 0;
}
