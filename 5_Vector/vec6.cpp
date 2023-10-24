#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
    vector<int> v(4, 2); // 4 is vector size and 2 is the value every index is initialized.
    v.push_back(3);
    cout << "Size: " << v.size()<<endl;
    cout << "Capacity: " << v.capacity()<<endl;

    for(auto it=v.begin();it!=v.end();it++){
        cout << *it <<" ";
    }
    cout<<endl;
    
    for (auto i : v)
    {
        cout << i << " "; 
    }

    cout << endl;
    v.erase(v.begin() + 2);
    cout << "Size: " << v.size() << endl;
    
    cout<<"Front Elem: "<<v.front()<<endl;
    cout<<"Last Elem: "<<v.back()<<endl;

    for (auto i : v)
    {
        cout << i << " "; 
    }
    cout << endl;

    v.clear(); // it will clear the vector.

    cout << "Capacity: " << v.capacity() << endl;
    cout << "Size: " << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl;

    return 0;
}
