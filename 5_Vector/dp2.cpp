#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> a{4,1,3,9,5,7,6,8};

    auto maximum=max_element(a.begin(),a.end());
    cout<<"The max element is "<<*maximum<<endl;

    auto minimum=min_element(a.begin(),a.end());
    cout<<"The min element is "<<*minimum<<endl;
    
    return 0;
}
