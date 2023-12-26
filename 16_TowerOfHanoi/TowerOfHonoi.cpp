#include <iostream>
using namespace std;
void towerOfHanoi(int n, int source, int helper, int des,int &count)
{
    if (n == 1)
    {
        cout << "Move disk 1 from " << source << " to " << des << endl;
    }
    else
    {
        towerOfHanoi(n - 1, source, des, helper,count);
        cout << "Move disk " << n << " from " << source << " to " << des << endl;
        towerOfHanoi(n - 1, helper, source, des,count);
    }
    count++;
}
int main(int argc, char const *argv[])
{
    int n = 3; // number of elements in the array
    int count=0;
    towerOfHanoi(n, 1, 2, 3,count);
    cout<<"Number of moves: "<<count<<endl;
    return 0;
}
