#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int tk, choco;
        cin >> tk;

        choco = tk / 5;
       
        choco += choco/2;

        cout << choco << endl;
    }

    return 0;
}