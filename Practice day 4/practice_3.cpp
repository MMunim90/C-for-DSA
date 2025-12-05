#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    getline(cin, str);

    string s;
    cin >> s;

    string word;
    int count = 0;

    stringstream ss(str);

    while(ss >> word)
    {
        // cout << word << endl;
        if(word == s)
        {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}