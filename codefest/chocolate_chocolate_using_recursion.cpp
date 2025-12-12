#include<bits/stdc++.h>
using namespace std;

int chocolate(int choco)
{ 
    if(choco < 1)
    {
        return 0;
    }

    int total_choco = chocolate(choco / 3);
    return total_choco+choco;
}

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int tk, choco;
        cin >> tk;
        
        choco = tk / 5;
        int total_choco = chocolate(choco);
        cout << total_choco << endl;
    }
    
    return 0;
}