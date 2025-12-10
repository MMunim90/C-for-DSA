#include<bits/stdc++.h>
using namespace std;
int main()
{
    int d, remaining_days; cin >> d;
    remaining_days = 15 - d;
    if(d > 15)
    {
        cout << "-1" << endl;
        return 0;
    }
    cout << remaining_days << endl;
    return 0;
}