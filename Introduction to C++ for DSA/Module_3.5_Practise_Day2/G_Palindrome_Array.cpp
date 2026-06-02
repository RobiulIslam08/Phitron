#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0;i<n; i++) {
        cin >> a[i];
    }

    int isPalindrome = 0;
    for(int i = 0,  j= n- 1; i<j; i++,j--) {
        if(a[i] != a[j]){
            isPalindrome = 1;
        }
    }
    if(isPalindrome == 0){
        cout << "YES";
    }else if(isPalindrome == 1) {
        cout << "NO";
    }
    return 0;
}