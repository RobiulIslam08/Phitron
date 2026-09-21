#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    map<string, int> db;
    while(n--)
    {

        string nm;
        cin >> nm;

        if(db[nm] == 0)
        {
            cout << "OK" << endl;
            db[nm] = 1;
        }
        else{
            cout << nm << db[nm] << endl;
            db[nm]++;
        }

    }

    return 0;
}