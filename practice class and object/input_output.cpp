#include <bits/stdc++.h>
using namespace std;

class Output
{
public:
    int id;

    Output(int id)
    {
        this->id = id;
    }
};

int main()
{
    Output myID(54324);
    // int b = 8;

    cout << myID.id << endl;
    return 0;
}