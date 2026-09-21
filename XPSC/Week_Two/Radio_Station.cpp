#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;

    map<string, string> ser_n;

    for(int i = 0; i<n; i++)
    {
        string nm, ip;
        cin >> nm >> ip;
        ser_n[ip] = nm;


    }
    for(int i = 0; i<m; i++)
    {
        string cmd, ip;
        cin >> cmd >>ip;
        string original_ip = ip;
        ip.pop_back();

        cout << cmd << " " << original_ip << " " <<  "#" << ser_n[ip] << endl;
    }
    return 0;
}