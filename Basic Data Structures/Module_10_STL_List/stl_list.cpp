#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {2, 5,6,7,8,4};
    list<int> l(v.begin(), v.end());

    l.insert(next(l.begin(), 2) , 100);
    
    // l.push_back(20);
    // l.push_front(200);
    for(int val : l)
    {
        cout << val << endl;
    }

   
    

    
    return 0;
}