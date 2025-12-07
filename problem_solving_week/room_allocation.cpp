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
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
        }

        double total_room = 0;
        double peoples = 0;
        for(int i=0; i<n; i++)
        {
            peoples += arr[i];
        }

        total_room = ceil(peoples / 2);

        cout << total_room << endl;
    }
    
    return 0;
}