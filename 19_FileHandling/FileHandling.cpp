#include<iostream>
#include<fstream>
using namespace std;
int main(int argc, char const *argv[])
{
    ofstream fout;
    fout.open("zoom.txt");
    fout<<"Hello India";
    fout.close();
    return 0;
}
