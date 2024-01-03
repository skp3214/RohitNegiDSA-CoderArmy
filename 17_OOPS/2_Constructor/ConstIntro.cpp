
// Constructors: It is a special type of function that is invoked automatically at the time of object creation
// 1. Default constructor - If no parameterized constructor is provided, then compiler will provide one
// automatically with default values for all parameters. It sets each data member to zero/nullptr or
// false respectively if the type allows it. For non-class types like int, float etc.,
// default value would be zero / nullptr / false but for class types (like string), it
// initializes them as empty strings / objects / whatever they are initialized to by default.
// It doesnot have any return type
// It start with class name.
// 2. Parameterized Constructor - A constructor that takes arguments in its parentheses. This
// can take any number of arguments and can initialize the members of a class using those
// argument values. The syntax is same as normal functions. But instead of returning anything,
// it constructs an object of the class.
// We can have as many contructor we want.


#include <iostream>
#include <string>
using namespace std;
class Student
{
private:
    int roll_no;
    string name;

protected:
    string course;
    int m1, m2, m3;

public:
    Student() {}       // Default constructor: non-parametrised;


    Student(string r){    // parametrised constructor: e.g string is passed
        course=r;
    }


    Student(int roll_no,string name,string course,int m1,int m2,int m3){
        this->roll_no = roll_no;   
        this->name = name;         
        Student::course = course; // this is also valid
        this->m3=m3;
        this->m1=m1;
        this->m2=m2;    

    }
    
    string getName()
    {
        return name;
    }

    void setName(string k)
    {
        name = k;
        
    }

    int total(int m1, int m2, int m3)
    {
        return m1 + m2 + m3;
    }




    int average(int m1, int m2, int m3)
    {
        return (m1 + m2 + m3) / 3;
    }
    int average()
    {
        return (m1 + m2 + m3) / 3;
    }
    string grade(int a)
    {
        if (a >= 90)
            return "A";
        else if (a >= 80)
            return "B";
        else if (a >= 70)
            return "C";
        else
            return "D";
    }


    string getCourse()
    {
        return course;
    }

    int getRollno()
    {
        return roll_no;
    }
};

int main()
{
    Student obj1;
    Student obj2("Math");
    Student obj4(12114973,"Sachin","Java",98,76,89);

    obj1.setName("Sachin");
    cout << obj1.getName() << endl;
    cout << obj1.total(55, 50, 60) << endl;
    cout << obj1.average(40, 50, 60) << endl;
    cout << obj1.grade(obj1.average(40, 50, 60)) << endl;

    cout << obj2.getCourse() << endl;

    cout<<obj4.getName()<<endl;
    cout<<obj4.getCourse()<<endl;
    cout<<obj4.average()<<endl;
    cout<<obj4.grade(obj4.average())<<endl;

    return 0;
}
