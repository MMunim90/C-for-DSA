#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int arr[n];

    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    int flag = 1;

    int start = 0;
    int end = n-1;

    while(start<end)
    {
        if(arr[start] != arr[end])
        {
            flag = 0;
            cout << "NO" << endl;
            break;
        }

        start++;
        end--;
    }

    if(flag)
    {
        cout << "YES" << endl;
    }
    return 0;
}