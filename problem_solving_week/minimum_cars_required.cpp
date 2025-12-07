#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        double friends;
        cin >> friends;

        double total_car_need = ceil(friends / 4);

        cout << total_car_need << endl;
    }
    
    return 0;
}