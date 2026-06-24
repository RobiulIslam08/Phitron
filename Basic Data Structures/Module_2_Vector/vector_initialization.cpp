#include<bits/stdc++.h>
using namespace std;
int main()
{
    // vector<int> v;
    // vector<int> v(5);
    // vector<int> v(10,-1);
    int a[5] = {1,2,3,4,5};
    vector<int> v(a, a+5);
    for (int i = 0; i<v.size(); i++){
        cout << v[i] ;
    }

                                                                         
    return 0;
}