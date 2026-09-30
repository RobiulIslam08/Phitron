#include<bits/stdc++.h>
using namespace std;
int main()
{
    int b, h, c;
    cin >> b >> h >> c;
    
    int bred = b/2;
    int total_hc = h +c;
    int result= min(bred, total_hc);
    cout << result << endl;
    return 0;
}