#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int jars, children;
        cin >> jars >> children;

        int cookies[jars];

        for(int i=0; i<jars; i++)
        {
            cin >> cookies[i];
        }

        int min_cookies_waste = INT_MAX;
        int min = 0;

        for(int i=0; i<jars; i++)
        {
            // cout << cookies[i] << " ";
            
                min = cookies[i] % children;
                if(min_cookies_waste > min)
                {
                    min_cookies_waste = min;
                }

            

        }

        cout << min_cookies_waste << endl;
    }
    
    return 0;
}