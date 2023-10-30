#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int A[3][3] = {
        {10, 20, 30},
        {40, 50, 60},
        {70, 80, 90}};
    int B[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    int AB[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            AB[i][j] = A[i][j] - B[i][j];
        }
    }
    cout << "The resultant matrix is : " << endl;
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            cout << AB[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
