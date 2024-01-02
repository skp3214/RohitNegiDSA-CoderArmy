#include<iostream>
#include<string>
using namespace std;

// Class is a template which is used to create object.

class Student{
    public:  //access specifier
    string name;
    int age;
    int roll_no;
};

int main(int argc, char const *argv[])
{
    Student s1;     // here s1 is the object
    cout<<"Enter the details of student 1:\n";
    cin>>s1.name>>s1.age>>s1.roll_no;
    cout<<"\nDetails of student 1 are as follows:\nName : "<<s1.name<<endl<<"Age : "<<s1.age<<endl<<"Roll No : "<<s1.roll_no<<endl;


    return 0;
}
