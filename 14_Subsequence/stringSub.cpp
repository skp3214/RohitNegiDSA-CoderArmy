#include <iostream>
#include <vector>
#include <string>
using namespace std;

void subsequence(string arr, int index, int n, vector<string> &ans, string temp)
{
    if (index == n)
    {
        ans.push_back(temp);
        return;
    }
    subsequence(arr, index + 1, n, ans, temp);
    temp.push_back(arr[index]);
    subsequence(arr, index + 1, n, ans, temp);
}

int main(int argc, char const *argv[])
{
    string arr = "123";
    vector<string> ans;
    string temp;
    subsequence(arr, 0, 3, ans, temp);
    for (int i = 0; i < ans.size(); i++)
    {
        string s = ans[i];
        if (!s.empty())
        {
            cout << stoi(s) << endl;
        }
    }

    return 0;
}
