#include <iostream>
#include <vector>
using namespace std;

void subsequence(int arr[], int index, int n, vector<int> &ans, int sum)
{
    if (index == n)
    {
        ans.push_back(sum);
        return;
    }

    subsequence(arr, index + 1, n, ans, sum);
    subsequence(arr, index + 1, n, ans, sum + arr[index]);
}

int main(int argc, char const *argv[])
{
    int arr[] = {1, 2, 3};
    vector<int> ans;
    subsequence(arr, 0, 3, ans, 0);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}
