#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;

    int freq[26] = {0}; // every time must initialize zero in this frequency array.
    for(int i=0; i<str.size(); i++)
    {
        // detail
        /*
        // part 1
        int ch = str[i];
        ch = tolower(ch);

        int idx = ch - 'a';
        freq[idx]++;

        // part 2
        int ch = tolower(str[i]);
        int idx = freq[ch - 'a']++;
        */

        // part 3
        int idx = freq[tolower(str[i]) - 'a']++;

    }

    cout << min({freq['e' - 'a'], freq['g' - 'a'], freq['y' - 'a'], freq['p' - 'a'], freq['t' - 'a']});

    return 0;
}