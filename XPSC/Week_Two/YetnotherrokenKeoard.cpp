#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;

    stack<pair<char, int>> lower_st;
    stack<pair<char, int>> uper_st;

    for(int i = 0; i< s.length(); i++)
    {
        if(s[i] == 'b')
        {
            if(!lower_st.empty())
            {
                lower_st.pop();
            }
        }
       else if(s[i] == 'B')
        {
            if(!uper_st.empty())
            {
                uper_st.pop();
            }
        }

        else if(islower(s[i]))
        {
            lower_st.push({s[i], i});
        }
        else if(isupper(s[i]))
        {
            uper_st.push({s[i], i});
        }

    }

    vector<pair<int, char>> remain;
 
    while(!lower_st.empty())
    {
        remain.push_back({lower_st.top().second, lower_st.top().first});
        lower_st.pop();
    }
    while(!uper_st.empty())
    {
        remain.push_back({uper_st.top().second, uper_st.top().first});
        uper_st.pop();
    }

    sort(remain.begin(), remain.end());
    for(auto p : remain)
    {
        cout << p.second;
    }
    cout << "\n";
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