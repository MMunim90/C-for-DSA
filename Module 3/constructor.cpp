// #include <bits/stdc++.h>
// using namespace std;

// class Student
// {
// public:
//     int roll;
//     int cls;
//     double gpa;

//     Student(int r, int c, double g)
//     {
//         roll = r;
//         cls = c;
//         gpa = g;
//     }
// };

// int main()
// {
//     Student munim(17, 10, 5.00);
//     // munim.roll = 17;
//     // munim.cls = 10;
//     // munim.gpa = 5.00;

//     Student karim(29, 10, 3.59);

//     cout << munim.roll << " " << munim.cls << " " << munim.gpa << endl;
//     cout << karim.roll << " " << karim.cls << " " << karim.gpa << endl;
//     return 0;
// }


// take input from user

#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int roll;
    int cls;
    double gpa;

    // Student(int r, int c, double g)
    // {
    //     roll = r;
    //     cls = c;
    //     gpa = g;
    // }
};

int main()
{
    // int r;
    // int c;
    // double g;
    Student munim;
    cin >> munim.roll >> munim.cls >> munim.gpa;

    // Student munim(17, 10, 5.00);
    // munim.roll = 17;
    // munim.cls = 10;
    // munim.gpa = 5.00;

    // Student karim();


    cout << munim.roll << " " << munim.cls << " " << munim.gpa << endl;
    // cout << karim.roll << " " << karim.cls << " " << karim.gpa << endl;
    return 0;
}