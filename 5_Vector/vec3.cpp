#include <iostream>
#include <vector>
using namespace std;
int main(int argc, char const *argv[])
{
    vector<int> v(4,2);  // 4 is vector size and 2 is the value every index is initialized.
    v.push_back(3);
    for(auto i:v){
        cout<<i<<" ";    // 2 will be printed 4 times.
    }
    cout<<"Size: "<<v.size();

    return 0;
}
