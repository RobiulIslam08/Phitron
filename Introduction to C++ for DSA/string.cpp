#include<iostream>
using namespace std;
int main() 
{
    int n;
    cin >> n;
    cin.ignore();
  
    char s[1000];
    // cin >> s;
    cin.getline(s, 1000);
    cout << n << endl << s;
}