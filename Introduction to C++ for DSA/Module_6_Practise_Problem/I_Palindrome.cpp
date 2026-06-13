#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    bool flag = true;

    for(int i = 0, j = s.length() - 1; i < j; i++, j--)
    {
        if(s[i] != s[j])
        {
            flag = false;
            break;
        }
    }

    if(flag)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}