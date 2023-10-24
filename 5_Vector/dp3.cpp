#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
    vector<int>b{1,2,2,2,2,2,4,5,6,7,8};
    int elemToFind=2;

    auto lowerBound=lower_bound(b.begin(),b.end(),elemToFind);
    auto upperBound=upper_bound(b.begin(),b.end(),elemToFind);
    cout<<"Lower Bound: "<<(lowerBound-b.begin())<<endl;
    cout<<"Upper Bound: "<<(upperBound-b.begin())<<endl;
    
    return 0;
}

    // cout<<"Element found at index: "<<distance(b.begin(),upperBound)<<endl;