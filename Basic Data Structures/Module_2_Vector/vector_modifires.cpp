#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v= {1,2, 4, 5,2};
    // v.insert(v.begin() + 2, 100);

    // for(int i = 0; i<v2.size(); i++){
    //     cout << v2[i] << endl;
    // }

    // replace(v.begin(),v.end()-1,2,200);
    // for( int x:v)
    // {
    //     cout << x << ' ' << endl;
    // }

    auto it = find(v.begin(), v.end(),50);
    if(it == v.end()){
        cout << "not found" << endl;
    }else{
        cout << "found" << endl;
    }
    return 0;
}