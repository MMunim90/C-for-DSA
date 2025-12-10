#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, n, remaining; cin >> a >> b >> n;
    remaining = a - (b * n);
    cout << remaining << endl;
    return 0;
}