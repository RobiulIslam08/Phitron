#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    int n;
    cin >> n;
    int a[n];
    for(int i = 0 ; i<n; i++)
    {
        cin >>  a[i];
    }

    long long int sum = 0;

    int small_odd = INT_MAX;

    for(int i = 0; i<n; i++)
    {
        sum += a[i];
    }
    if(sum % 2 != 0)
    {
        for(int i = 0; i< n; i++)
        {
            if(a[i] % 2 != 0)
            {
              small_odd =  min(small_odd, a[i]);
            }
        }
    }
    if(sum % 2 != 0)
    {
        sum = sum - small_odd;
        cout << sum << endl;
    }
    else{
        cout  << sum << endl;
    }

    return 0;
}