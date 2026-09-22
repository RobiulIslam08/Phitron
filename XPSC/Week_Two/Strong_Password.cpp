#include<bits/stdc++.h>
using namespace std;

void solve()
{
     string s;
        cin >> s;

        int n= s.length();
        for(int i = 0; i<n-1; i++)
        {
            if(s[i] == s[i+1])
            {
                char insert_c;
                
                string ans = s.substr(0, i+1) + insert_c + s.substr(i+1);
                cout << ans << "\n";
                return;
            }
           
        }
        char first_c = (s[0] == 'a') ? 'b' : 'a';
        cout << first_c + s << endl;
}
int main()
{
    int t;
    cin >> t; 
    while(t--)
    {
       solve();
    }
    return 0;
}