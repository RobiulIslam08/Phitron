#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        int n;
        int x;
        cin >> n >> x;
        vector<int> a(n);
        for(int i = 0; i<n; i++) {
            cin >> a[i];
        }

        vector<int> can_take;
        for(int i = 0; i< n; i++) {
            if(a[i] % x == 0){
                can_take.push_back(a[i]);
            }
        }

        int largest = 0;
        for(int i = 0; i<can_take.size(); i++) {
           largest = max(largest, can_take[i]);
        }
        cout << largest << endl;
    }
    
    return 0;
}