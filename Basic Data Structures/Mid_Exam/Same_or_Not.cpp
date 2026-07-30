// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     stack<int> st;
//     queue<int> q;

//     int n, m;
//     cin >> n >> m;

//     int v;

//     for (int i = 1; i <= n; i++)
//     {
//         cin >> v;
//         st.push(v);
//     }

//     for (int i = 1; i <= m; i++)
//     {
//         cin >> v;
//         q.push(v);
//     }

//     if (st.size() == q.size())
//     {
//         bool flag = true;

//         while (!st.empty() && !q.empty())
//         {
//             if (st.top() != q.front())
//             {
//                 flag = false;
//                 break;
//             }

//             st.pop();
//             q.pop();
//         }

//         if (flag == true)
//         {
//             cout << "YES" << endl;
//         }
//         else
//         {
//             cout << "NO" << endl;
//         }
//     }
//     else
//     {
//         cout << "NO" << endl;
//     }

//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int>st;
    queue<int> q;
    int n, m;
    cin >> n >> m;

    int v;

    for(int i = 0; i<n; i++)
    {
        cin >> v;
        st.push(v);
    }
    for(int i = 0; i<m; i++)
    {
        cin >> v;
        q.push(v);
    }

    if(st.size() == q.size()) 
    {
        bool flag = false;
        while (!st.empty() && !q.empty())
        {
            if(st.top() != q.front())
            {
                flag = false;
                break;
            }
            st.pop();
            q.pop();

        }
        if(flag == true)
        {
            cout << "YES" << endl;

        }else{
            cout << "NO" << endl;

        }
        
    }
    else{
        cout <<"NO" << endl;
    }
    return 0;
}