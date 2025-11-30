#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;

    int e_cnt = 0, g_cnt = 0, y_cnt = 0, p_cnt = 0, t_cnt = 0;

    for(int i=0; i<str.size(); i++)
    {
        char ch = str[i];
        if(ch == 'e' || ch == 'E')
        {
            e_cnt++;
        }
        if(ch == 'g' || ch == 'G')
        {
            g_cnt++;
        }
        if(ch == 'y' || ch == 'Y')
        {
            y_cnt++;
        }
        if(ch == 'p' || ch == 'P')
        {
            p_cnt++;
        }
        if(ch == 't' || ch == 'T')
        {
            t_cnt++;
        }
    }

    int minimum = min({e_cnt, g_cnt, y_cnt, p_cnt, t_cnt});

    cout << minimum << endl;
    return 0;
}