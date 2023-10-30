#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int arr[4][4] = {
        {1, 2, 3,1},
        {4, 5, 6,1},
        {7, 8, 9,1},
        {1, 8, 9,1}
        };

    cout << "Original array: " << endl;

    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Sum of diagonal: ";
    int sum = 0;
    for (int i = 0; i < 4; i++)
    {
        // for (int j = 0; j < 3; j++)
        // {
        //     if (i == j)
        //     {
        //         sum += arr[i][j];
        //     }
        // }
        
        sum += arr[i][3 - i]+arr[i][i];
    }
    if(4%2==0){
        cout << sum;
    }
    else{
        cout << sum - arr[4 / 2][4 / 2];
    }

    return 0;
}
