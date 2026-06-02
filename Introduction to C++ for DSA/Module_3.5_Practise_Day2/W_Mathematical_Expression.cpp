#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    char s, q; // s হলো সাইন (+, -, *), q হলো '=' চিহ্ন
    
    // ইনপুট ফরম্যাট: A S B Q C (যেমন: 5 + 10 = 15)
    cin >> a >> s >> b >> q >> c;

    // ১. যদি সাইনটি প্লাস '+' হয়
    if(s == '+') {
        if(a + b == c) {
            cout << "Yes" << endl;
        } else {
            cout << a + b << endl; // ভুল হলে সঠিক উত্তর প্রিন্ট
        }
    }
    // ২. যদি সাইনটি মাইনাস '-' হয়
    else if(s == '-') {
        if(a - b == c) {
            cout << "Yes" << endl;
        } else {
            cout << a - b << endl;
        }
    }
    // ৩. যদি সাইনটি গুণ '*' হয়
    else if(s == '*') {
        if(a * b == c) {
            cout << "Yes" << endl;
        } else {
            cout << a * b << endl;
        }
    }

    return 0;
}