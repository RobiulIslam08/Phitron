#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
   while (t--)
   {
     string s;
    cin >> s;
    string x;
    cin >> x;
    while ((true))
    {
        int idx = s.find(x);
        if(idx == -1)
        {
            break;
        }
        else
        {
            s.replace(idx,x.length(),"#");
        }
    }
    cout << s << endl;
   }
   
    
    return 0;
}