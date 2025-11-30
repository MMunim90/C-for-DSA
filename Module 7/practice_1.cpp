#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
    string name;
    int roll;
    int marks;
};

bool comp(Student i, Student j)
{
    // 1
    // return(i.marks == j.marks) ? i.roll > j.roll : i.marks < j.marks;

    // 2
    // if(i.marks == j.marks)
    // {
    //     return i.roll > j.roll;
    // }
    // else
    // {
    //     return i.marks < j.marks;
    // }

    // 3
    if(i.marks < j.marks)
    {
        return true;
    }
    else if(i.marks > j.marks)
    {
        return false;
    }
    else
    {
        if(i.roll > j.roll)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    // all this three are same;
}

int main()
{
    int n;
    cin >> n;

    Student arr[n];

    for(int i=0; i<n; i++)
    {
        cin >> arr[i].name >> arr[i].roll >> arr[i].marks;
    }

    sort(arr, arr+n, comp);

    for(int i=0; i<n; i++)
    {
        cout << arr[i].name << " " << arr[i].roll << " " << arr[i].marks << endl ;
    }
    return 0;
}