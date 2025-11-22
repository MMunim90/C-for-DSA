#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    char name[20];
    int roll;
    char section;
    int math_marks;
    int cls;

    Student( int roll, char section, int math_marks, int cls)
    {
        this->roll = roll;
        this->section = section;
        this->math_marks = math_marks;
        this->cls = cls;
    }
};

int main()
{
    Student student_1( 17, 'A', 72, 10);
    char temp_1[20] = "munim";
    strcpy(student_1.name, temp_1);

    Student student_2( 27, 'A', 68, 10);
    char temp_2[20] = "amin";
    strcpy(student_2.name, temp_2);

    Student student_3( 35, 'A', 62, 10);
    char temp_3[20] = "roni";
    strcpy(student_3.name, temp_3);

    if(student_1.math_marks > student_2.math_marks && student_1.math_marks > student_3.math_marks)
    {
        cout << student_1.name << endl;
    }
    else if(student_2.math_marks > student_1.math_marks && student_2.math_marks > student_3.math_marks)
    {
        cout << student_2.name << endl;
    }
    else if(student_3.math_marks > student_2.math_marks && student_3.math_marks > student_1.math_marks)
    {
        cout << student_3.name << endl;
    }

    // cout << student_1.name << " " << student_1.roll << " " << student_1.section << " " << student_1.math_marks << " " << student_1.cls << endl;


    return 0;
}