#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    // cin >> s;

    // cin.getline(s, 100); // it working if we declare it like this char s[100];  .it is a character array.

    cin.ignore();

    // now we write this.  it is built in string class.
    getline(cin, s);

    cout << n << " " << s << endl;
    return 0;
}