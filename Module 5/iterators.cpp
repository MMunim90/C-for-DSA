#include<bits/stdc++.h>
using namespace std;
int main()
{
    // string s = "Hello";
    string s = "hlw munim how are you";
    // cin >> s;

    // for(int i=0; i<s.size(); i++)
    // {
    //     cout << s[i] << endl;
    // }

    // for(string:: iterator itr=s.begin(); itr<s.end(); itr++)
    // {
    //     cout << *itr << endl;
    // }

    for(auto itr=s.begin(); itr<s.end(); itr++)
    {
        cout << *itr << endl;
    }

    // cout << *s.begin() << endl;
    // cout << *(s.end() - 1) << endl;
    return 0;
}