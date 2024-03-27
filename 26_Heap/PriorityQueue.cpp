#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    priority_queue<int>p;
    p.push(10);
    p.push(20);
    p.push(15);
    p.push(5);
    p.push(54);
    cout<<"The elements in the queue are : ";
    while(!p.empty())
    {
        int x = p.top();
        cout<<x<<" ";
        p.pop();
    }

    priority_queue<int,vector<int>,greater<int>>q;
    q.push(10);
    q.push(20);
    q.push(15);
    q.push(5);
    q.push(54);
    while(!q.empty())
    {
        int x = q.top();
        cout<<x<<" ";
        q.pop();
    }


    return 0;
}
