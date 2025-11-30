#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    string name;
    int roll;
    int marks;
};

bool comp(Student l, Student r)
{
    // 1
    // if(l.marks > r.marks)
    // {
    //     return true;
    // }
    // else if(l.marks < r.marks)
    // {
    //     return false;
    // }
    // else
    // {
    //     if(l.roll < r.roll)
    //     {
    //         return true;
    //     }
    //     else
    //     {
    //         return false;
    //     }
    // }


    // 2
    return(l.marks == r.marks) ? l.roll < r.roll : l.marks > r.marks;
    // when l.marks is equal to r.marks then sort the array of object ascending roll wise like(small roll first then big roll), otherwise sort the array of object descending marks wise like(big marks first then small marks).
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
        cout << arr[i].name << " " << arr[i].roll << " " << arr[i].marks << " " << endl;
    }
    return 0;
}