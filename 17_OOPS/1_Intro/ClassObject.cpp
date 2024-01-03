
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
    obj1.setName("Sachin");
    cout << obj1.getName() << endl;
    cout << obj1.total(55, 50, 60) << endl;
    cout << obj1.average(40, 50, 60) << endl;
    cout << obj1.grade(obj1.average(40, 50, 60)) << endl;

    return 0;
}

