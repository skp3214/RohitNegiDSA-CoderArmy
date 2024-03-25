#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    list<int> l1 = {23, 45, 67};
    cout << "List Length: " << l1.size() << endl;

    // Insert at beginning of the list
    l1.push_front(-9);
    cout << "-9 is inserted at front" << endl;
    cout << "New List: ";
    for (auto i : l1)
        cout << i << " ";
    cout << endl;
    return 0;
}
