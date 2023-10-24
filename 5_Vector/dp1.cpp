#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
    vector<int> v{1,2,3,2,4,2,5,6};
    int findOCcur=2;
    int occTime=count(v.begin(),v.end(),findOCcur);
    cout<<"The element "<<findOCcur<<" occurs in the array "<<occTime<<" times."<<endl;
    return 0;
}

