#include <iostream>
#include <vector>
using namespace std;
int main(int argc, char const *argv[])
{
    vector<char> v(4);  // here 4 is the size of v
    for(auto i:v){
        cout<<i<<" ";   // nothing will be printed.
    }

    cout<<endl;

    vector<char> c(5,'T'); // size 5 and every index is initialized with T
    for (auto i : c) {
        cout << i << " ";
    }

    return 0;
}


