#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, s;
        cin >> n >> s;

        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
        }

        int is_equal = 0;

        for(int i=0; i<n-1; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                for(int k=j+1; k<n; k++)
                {
                    if(arr[i] + arr[j] + arr[k] == s)
                    {
                        is_equal = 1;
                    }
                }
            }
        }

        if(is_equal == 1)
        {
            cout << "YES" << endl;
        }
        else if(is_equal == 0)
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}