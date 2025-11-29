#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    string str;
    cin >> s;
    str = s;

    reverse(s.begin(), s.end());

    if(str == s)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}