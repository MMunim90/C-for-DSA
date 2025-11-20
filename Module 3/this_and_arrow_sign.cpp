#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int roll;
    int cls;
    double gpa;

    Student(int roll, int cls, double gpa)
    {
        // this->roll = roll;
        // this->cls = cls;
        // this->gpa = gpa;
        
        // "this" is a pointer
        (*this).roll = roll;
        (*this).cls = cls;
        (*this).gpa = gpa;
    }
};

int main()
{
    Student munim(17, 10, 5.00);
    Student karim(27, 10, 4.72);


    cout << munim.roll << " " << munim.cls << " " << munim.gpa << endl;
    cout << karim.roll << " " << karim.cls << " " << karim.gpa << endl;
    return 0;
}