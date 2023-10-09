#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int array[10];
    int arrsize = sizeof(array) / sizeof(int);
    cout<<arrsize;
    cout << "Enter the 10 array element: ";
    for (int i = 0; i < arrsize; i++)
    {
        cin >> array[i];
    }
    
    int sum=0;
    for(int j=0;j<arrsize;j++){
        sum+=array[j];
    }
    cout<<"Sum is: "<<sum;

    return 0;
}




    // for (auto x : array)
    // {
    //     cout << " " << x << endl;
        
    // }