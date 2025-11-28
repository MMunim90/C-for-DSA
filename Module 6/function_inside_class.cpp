#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
    string name;
    int roll;
    int math;
    int english;

    Student(string name, int roll, int math, int english)
    {
        this->name = name;
        this->roll = roll;
        this->math = math;
        this->english = english;
    }
    void hello()
    {
        cout << "hello from " << name << endl;
    }
    void total_marks()
    {
        cout << "Total marks of " << name << " = " << math+english << endl;
    }
};

int main()
{
    Student munim("Al Munim", 24, 85, 72);
    munim.hello();
    munim.total_marks();
    // cout << munim.name << " " << munim.roll << endl;

    Student emon("Baharul islam emon", 25, 88, 75);
    emon.hello();
    emon.total_marks();

    return 0;
}