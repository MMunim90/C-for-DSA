#include<bits/stdc++.h>
using namespace std;

class Swap
{
    public:
    int a;
    int b;

    Swap(int a, int b)
    {
        this->a = b;
        this->b = a;
    }
};

int main()
{
    int c, d;
    cin >> c >> d;
    Swap swapping(c, d);

    cout << swapping.a << " " << swapping.b << endl;
    return 0;
}