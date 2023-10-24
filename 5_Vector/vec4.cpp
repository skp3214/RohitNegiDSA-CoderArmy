#include <iostream>
#include <vector>
using namespace std;
int main(int argc, char const *argv[])
{
    vector<int> v{4,5,6,7,8,9};  // here v is initialized and its size is 6
    for(auto i:v){
        cout<<i<<" ";  
    }

    return 0;
}
