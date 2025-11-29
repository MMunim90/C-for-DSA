#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;

        cin >> str;

        int first_sum = str[0] + str[1] + str[2];

        int last_sum = str[3] + str[4] + str[5];


        if(first_sum == last_sum)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}