#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
 while (n--)
 {
       string s;
    cin >>s;
    int first_sum = 0;
    int second_sum = 0;
    for(int i = 0; i<3; i++) 
    {
        first_sum += s[i] - '0';
      
    }
      for(int j = 3; j< s.length(); j++)
        {
            second_sum += s[j] - '0';
        }
    if(first_sum  == second_sum){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
 }
 

    return 0;
}