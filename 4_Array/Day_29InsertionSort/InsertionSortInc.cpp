#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int arr[] = {7, 4, 2, 3, 5};

    for (int i = 1; i <= 4; i++)
    {
        for (int j = i; j > 0; j--)
        {
            if (arr[j] < arr[j - 1])
            {
                swap(arr[j], arr[j - 1]);
            }
            else
            {
                break;
            }
        }
    }

    for(int i=0;i<=4;i++){
        cout<<arr[i];
    }
    return 0;
}
