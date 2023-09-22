#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int age;
    cout << "Enter your Age: "; 
    cin >>age ;

    if(age<12 || age>65){
       cout<<"Yes Eligible for discount.";
    }
    else{
        cout<<"Not eligible for discount.";
    }

    return 0;
}
