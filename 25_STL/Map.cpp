#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    map<int,int>m; //ordered
    m.insert(make_pair(20,30));
    m.insert(make_pair(10,20));
    m.insert(make_pair(40,70));
    m.insert(make_pair(50,30));
    m.insert(make_pair(20,30));
    cout<<"Map before erase:"<<endl;
    for (auto i : m) {
        cout <<i.first<<" "<<i.second<<endl;
    }
    //erasing the element with key  20 
    m.erase(20);
    cout<<"\n\nMap after erase of elements having Key=20:\n";
    for (auto i: m)
    {
        cout <<i.first<<" "<<i.second<<endl;
    }

    unordered_map<int,int>um;    
    unordered_multimap<int,int>ump; 
    
    return 0;
}
