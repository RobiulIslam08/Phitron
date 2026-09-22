#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);

        for(int i = 0; i<n; i++)
        {
            cin >> a[i];
        }

        map<int, bool> check;
        int count = 0;
        for(int i = n-1; i>= 0; i--)
        {
            if(check[a[i]])
            {
                count = i + 1;
                break;
            }
            check[a[i]] = true;
        }

        cout << count << endl;
    }
    return 0;
}