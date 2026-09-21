#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<string> mgs(n);

    for(int i = 0; i<n; i++)
    {
        cin >> mgs[i] ;
    }


    map<string, bool> visit;
    for(int i= n-1; i>=0; i--)
    {
        string name = mgs[i];

        if(!visit[name])
        {
            cout << name << endl;
            visit[name] =true;

        }
    }
    return 0;
}