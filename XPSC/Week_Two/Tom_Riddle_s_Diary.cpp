#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    map<string, bool> check;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        if(check[s])
        {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
            check[s] = true;
        }
    }
    return 0;
}