#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n, r;
        cin >> n >> r;

        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
        }

        int gun_switch_count = 0;

        for(int i=0; i<n; i++)
        {
            if(arr[i] > r && arr[i+1] <= r)
            {
                gun_switch_count++;
            }
            else if(arr[i] <= r && arr[i+1] > r)
            {
                gun_switch_count++;
            }
        }

        cout << gun_switch_count << endl;
    }
    
    return 0;
}