#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int age;
    cout << "Enter you age: ";
    cin >> age;
    if (age >= 18)
    {
        cout << "\nYou are eligible to vote";
    }
    else
    {
        cout << "\nSorry! You are not eligible for voting.";
    }
    return 0;
}
