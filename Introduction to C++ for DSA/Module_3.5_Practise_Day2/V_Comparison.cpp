#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a; 
    cin>> a;
    char s;
    cin >> s;
    int b; 
    cin >> b;

    if(s == '>') {
        if( a > b ) {
            cout << "Right";
        }
        else{
        cout << "Wrong";
    }

    }else if(s ==  '<'){
        if(a<b){
            cout << "Right";
        }
        else{
        cout << "Wrong";
    }

    }else if(s == '='){
        if(a == b){
            cout << "Right";
        }
        else{
        cout << "Wrong";
    }

    }else{
        cout << "Wrong";
    }

    return 0;
}