#include<iostream>
#include<fstream>
using namespace std;

int main(int argc, char const *argv[])
{
    ifstream fin;
    fin.open("zoom.txt");
    char c;
    fin>>c;
    while(!fin.eof()){
        cout<<c<<endl;
        fin>>c;
    }
    return 0;
}

