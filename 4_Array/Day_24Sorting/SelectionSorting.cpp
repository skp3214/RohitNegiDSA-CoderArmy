#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int arr[] = {7, 5, 3, 6, 4, 2, 8};
    int i;
    for (i = 0; i < 6; i++)
    {
        int index = i;
        for (int j = i + 1; j < 7; j++)
        {
            if (arr[j] < arr[index])
            {
                index = j;
            }
        }
            swap(arr[index], arr[i]);
    }

    for(int k=0;k<7;k++ ){
        cout<<arr[k];
    }

    return 0;
}
