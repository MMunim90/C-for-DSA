#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;
    string s = "EGYPT";
    
    int idx = str.find(s);

    while(idx != -1)
    {
        str.replace(idx, 5, " ");
        idx = str.find(s, idx+1);
    }

    cout << str << endl;

    return 0;
}