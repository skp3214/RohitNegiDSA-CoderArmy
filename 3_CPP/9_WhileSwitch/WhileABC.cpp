// 5: Print all the Capital and small letters  using a while loop. It means A-Z, then a-z.

#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    char alpha='A';
    while(alpha<='Z'){
        cout<<alpha<<" ";
        ++alpha;
    }

    cout<<endl;

    char alpha2='a';
    while(alpha2<='z'){
        cout<<alpha2<<" ";
        ++alpha2;
    }
    return 0;
}
