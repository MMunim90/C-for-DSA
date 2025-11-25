#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int x,y;
    cin >> x >> y;

    if(x % y == 0)
    {
        cout << "YES" << endl;
    }
    else if(x % y != 0)
    {
        cout << "NO" << endl;
    }
    return 0;
}