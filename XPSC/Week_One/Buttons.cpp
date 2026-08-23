#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;

    int coin = 0;

    for (int i = 0; i <2; i++)
    {
        if (a >= b)
        {
            coin += a;
            a--;
        }
        else if (b >= a)
        {
            coin += b;
            b--;
        }
    }

    cout << coin << endl;

    return 0;
}