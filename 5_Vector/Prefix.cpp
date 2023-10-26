#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool divide(vector<int> arr)
{
    int maxi = INT_MIN, prefix = 0, total_sum = 0, n = arr.size();
    for (int i = 0; i < n; ++i)
    {
        total_sum += arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        prefix += arr[i];
        if (total_sum == 2 * prefix)
        {
            return 1;
        }
    }
    return 0;
}

int main(int argc, char const *argv[])
{
    int n;
    cout << "Enter the size of aray: ";
    cin >> n;
    vector<int> v(n);
    cout << "Enter the element in array: ";
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }

    bool result = divide(v);
    cout<<result<<endl;
    return 0;
}
