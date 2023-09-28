#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int ascii_value = 65;

    
    for (int i = 0; i < 5; i++) {
       
        for (int j = 0; j < 5 - i - 1; j++) {
            cout << "  ";
        }

       
        for (int j = 0; j <= i; j++) {
          
            char ch = (char)(ascii_value + j);
            cout << ch << " ";
        }

        
        for (int j = i - 1; j >= 0; j--) {
            char ch = (char)(ascii_value + j);
            cout << ch << " ";
        }

        cout << endl;
    }
    
    return 0;
}
