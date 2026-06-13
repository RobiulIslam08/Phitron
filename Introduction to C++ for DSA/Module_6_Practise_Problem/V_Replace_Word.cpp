#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    string ans;
    for(int i = 0; i<s.length(); i++) 
    {
        if(s.substr(i,5) == "EGYPT"){
            ans += ' ';
            i += 4;
        }else
        {
            ans += s[i];
        }
    }
    cout << ans;
    return 0;
}