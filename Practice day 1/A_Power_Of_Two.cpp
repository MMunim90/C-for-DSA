#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin >> n;

    int flag = 0;
    
    for (int x = 0; x <= n/2; x++)
    {
        long long int power = pow(2, x);
        if (power == n)
        {
            flag = 1;
            break;
        }
    }

    if(flag==1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}