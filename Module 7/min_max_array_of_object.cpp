// calculate only minimum marks

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

    int minimum = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        // cout << arr[i].name << " " << arr[i].roll << " " << arr[i].marks << endl;

        // if(arr[i].marks < minimum)
        // {
        //     minimum = arr[i].marks;
        // }

        minimum = min(arr[i].marks, minimum);
    }

    cout << "Minimum marks : " << minimum << endl;


    int maximum = INT_MIN;

    for(int i=0; i<n; i++)
    {
        // if(arr[i].marks > maximum)
        // {
        //     maximum = arr[i].marks;
        // }

        maximum = max(arr[i].marks , maximum);
    }

    cout << "Maximum marks : " << maximum << endl;
    return 0;
}