#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    char abc[26];
    for (char i = 'a'; i <= 'z'; ++i)
    {
        abc[i - 'a'] = i;
    }

    for (int j = 0; j < 26; j++)
    {
        cout << abc[j] << " ";
    }
    return 0;
}
