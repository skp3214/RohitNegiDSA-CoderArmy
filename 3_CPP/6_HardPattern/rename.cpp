#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
   cout<<"Enter the row: ";
   int row;
   cin>>row;
   cout<<"Enter the column: ";
   int col;
   cin>>col;
   for(int i=1;i<=row;i++){
    for(int j=1;j<=col;j++){
        char m='A'+j-1;
        cout<<m<<" ";
        m++;
    }
    cout<<endl;
   }
    return 0;
}