#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    map<int, int> freq;
    int maximum = 0;
    for(int i = 0; i<n; i++)
    {
        int a;
        cin >> a;
        freq[a]++;
        maximum = max(maximum,freq[a]);
    }
    cout << maximum << endl;

    return 0;
}