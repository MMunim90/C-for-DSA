#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);

    stringstream str(s);
    string word;
    str >> word;
    reverse(word.begin(), word.end());
    cout << word;

    while (str >> word)
    {
        reverse(word.begin(), word.end());
        cout << " " << word;
    }
    
    return 0;
}