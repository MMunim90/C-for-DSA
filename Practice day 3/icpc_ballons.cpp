#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        string str;
        cin >> str;
        
        int freq[26] = {0};
        int total_ballon_count = 0;

        for(int i=0; i<n; i++)
        {           
            int ch = str[i];
            int idx = ch - 'A';
            idx = freq[idx]++;
            
            if(idx == 0)
            {
                total_ballon_count+=2;
            }
            else if(idx != 0)
            {
                total_ballon_count++;
            }
        }

        cout << total_ballon_count << endl;
    }
    
    return 0;
}