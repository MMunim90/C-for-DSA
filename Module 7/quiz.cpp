// 1
// #include<bits/stdc++.h>
// using namespace std;

// class Student
// {
//     public:
//     int roll;
//     Student(int r)
//     {
//         roll = r;
//     }
// };

// int main()
// {
//     int n;
//     cin >> n;


//     Student a = new Student a[n];

//     cin >> a.  // not possible
//     return 0;
// }


// 2
#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
    int roll;
};

int main()
{
    Student a[5];

    for(int i=0; i<5; i++)
    {
        cin >> a[i].roll;
    }

    for(int i=0; i<5; i++)
    {
        cout << a[i].roll << " ";
    }
    return 0;
}


