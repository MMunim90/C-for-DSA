#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    // cout << s << endl;
    cout << s[3] << endl;
    cout << s.at(2) << endl;
    cout << s.back() << endl;
    cout << s.front() << endl;

    // for printing last character of a string we can use
    cout << s[s.size()-1] << endl;
    return 0;
}