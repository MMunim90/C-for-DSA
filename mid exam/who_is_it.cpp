#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int id;
    char name[101];
    char section;
    int total_mark;
};

int main()
{
    int t;
    cin >> t;

    while (t--)
    {

        Student std_1, std_2, std_3;

        cin >> std_1.id >> std_1.name >> std_1.section >> std_1.total_mark;

        cin >> std_2.id >> std_2.name >> std_2.section >> std_2.total_mark;

        cin >> std_3.id >> std_3.name >> std_3.section >> std_3.total_mark;


        if (std_1.total_mark > std_2.total_mark && std_1.total_mark > std_3.total_mark)
        {
            cout << std_1.id << " " << std_1.name << " " << std_1.section << " " << std_1.total_mark << endl;
        }
        else if (std_2.total_mark > std_1.total_mark && std_2.total_mark > std_3.total_mark)
        {
            cout << std_2.id << " " << std_2.name << " " << std_2.section << " " << std_2.total_mark << endl;
        }
        else if (std_3.total_mark > std_1.total_mark && std_3.total_mark > std_2.total_mark)
        {
            cout << std_3.id << " " << std_3.name << " " << std_3.section << " " << std_3.total_mark << endl;
        }
        else if (std_1.total_mark == std_2.total_mark)
        {
            if (std_1.id < std_2.id)
            {
                cout << std_1.id << " " << std_1.name << " " << std_1.section << " " << std_1.total_mark << endl;
            }
            else
            {
                cout << std_2.id << " " << std_2.name << " " << std_2.section << " " << std_2.total_mark << endl;
            }
        }
        else if (std_1.total_mark == std_3.total_mark)
        {
            if (std_1.id < std_3.id)
            {
                cout << std_1.id << " " << std_1.name << " " << std_1.section << " " << std_1.total_mark << endl;
            }
            else
            {
                cout << std_3.id << " " << std_3.name << " " << std_3.section << " " << std_3.total_mark << endl;
            }
        }
        else if (std_2.total_mark == std_3.total_mark)
        {
            if (std_2.id < std_3.id)
            {
                cout << std_2.id << " " << std_2.name << " " << std_2.section << " " << std_2.total_mark << endl;
            }
            else
            {
                cout << std_3.id << " " << std_3.name << " " << std_3.section << " " << std_3.total_mark << endl;
            }
        }
    }
    return 0;
}