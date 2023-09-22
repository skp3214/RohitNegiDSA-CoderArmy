#include <iostream>
using namespace std;


int main(int argc, char const *argv[])
{
    int monthNumber;
    cout<<"Enter the number to know the month ";
    cin>>monthNumber;
    if(monthNumber>0 && monthNumber<13){
        if(monthNumber==1) cout<<"January";
        else if(monthNumber==2) cout<<"February";
        else if(monthNumber==3) cout<<"March";
        else if(monthNumber==4) cout<<"April";
        else if(monthNumber==5) cout<<"May";
        else if(monthNumber==6) cout<<"June";
        else if(monthNumber==7) cout<<"July";
        else if(monthNumber==8) cout<<"August";
        else if(monthNumber==9) cout<<"September";
        else if(monthNumber==10) cout<<"October";
        else if(monthNumber==11) cout<<"November";
        else  cout<<"December";
    }
    else{
        cout<< "Invalid Month Number. Please enter b/w 0-13 " <<endl;
    }
    return 0;
}
