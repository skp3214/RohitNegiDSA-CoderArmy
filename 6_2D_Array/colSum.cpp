#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<vector<int>> arr = {
        {10, 20, 30},
        {5, 6, 7},
        {8, 9, 10},
        {11, 12, 13}};

    for (int i = 0; i < arr[0].size(); i++)
    {
        cout << "Sum of column " << i << ": ";
        int sum = 0;
        for (int j = 0; j < arr.size(); j++)
        {
            sum += arr[j][i];
        }
        cout << sum << endl;
    }

    return 0;
}
