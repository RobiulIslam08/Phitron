#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "hello6789";
    //s.clear();// string কে clear kore dibe;
    if(s.empty() == true)
    {
        cout << "empty";
    }else
    {
        cout << "no empty" << endl;
    }
    cout << s << endl;


    // cout << s.size() << endl;
    // cout << s.max_size() << endl;
    // cout << s.capacity() << endl;
    return 0;
}