#include <iostream>
#include <vector>
using namespace std;
int main(int argc, char const *argv[])
{
    vector<int> v(4); // 4 is the size of vector v;
    for(auto i:v){
        cout<<i<<" ";  // it will give 0 4 times because default value of every index in 0;
    }

    return 0;
}
