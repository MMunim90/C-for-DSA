#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin >> a >> b >> c;

    int minimum = min(a,b);
    int maximum = max(a,b);

    cout << min(minimum,c) << " " << max(maximum,c) << endl;
    return 0;
}