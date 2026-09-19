#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; 
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        int ans = 0;
        for(int i = 0; i<n; i+=k)
        {
            bool found = false;
            for(int j = 0; j<k ; j++)
            {
                if(s[i + j] == '0')
                {
                    found = true;
                    break;
                }
            }
            if(!found)
            {
                ans++;
            }
           
        }

         
        cout << ans << endl;

    }
    return 0;
}