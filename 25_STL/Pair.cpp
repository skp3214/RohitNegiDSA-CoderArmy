#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    pair<string, int> p;
    p = make_pair("Hello", 10); // making a pair of string and integer
    pair<string, pair<int, float>> q;
    q.first = "rohit";
    q.second.first = 25;
    q.second.second = 3.76;
    cout << "The first element is " << q.first << endl;
    cout << "The second element in the pair inside the pair is " << q.second.first << endl;
    cout << "The third element in the pair inside the pair is " << q.second.second << endl;
    q=make_pair("sachin",make_pair(40, 4.98));//

    return 0;
}
