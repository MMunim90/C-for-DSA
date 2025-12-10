#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m, n, total_cost, total_earn; cin >> m >> n;
    total_cost = m * 30;
    total_earn = n * 50;
    int profit = total_earn - total_cost;
    cout << profit << endl;
    return 0;
}