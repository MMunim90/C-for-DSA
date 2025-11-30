// calculate minimum object

#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;
};

int main()
{
    int n;
    cin >> n;

    Student arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].name >> arr[i].roll >> arr[i].marks;
    }

    // int minimum = INT_MAX;
    Student minimum;
    minimum.marks = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        // cout << arr[i].name << " " << arr[i].roll << " " << arr[i].marks << endl;

        if(arr[i].marks < minimum.marks)
        {
            minimum = arr[i];
        }

        // minimum.marks = min(arr[i].marks, minimum.marks); // wrong
    }

    cout << "Student who got minimum marks : " << minimum.name << " " << minimum.roll << " " << minimum.marks << endl;


    Student maximum;
    maximum.marks = INT_MIN;

    for(int i=0; i<n; i++)
    {
        if(arr[i].marks > maximum.marks)
        {
            maximum = arr[i];
        }

        // maximum = max(arr[i].marks , maximum); // wrong
    }

    cout << "Student who got maximum marks : " << maximum.name << " " << maximum.roll << " " << maximum.marks << endl;
    return 0;
}