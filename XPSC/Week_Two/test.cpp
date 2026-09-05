#include<bits/stdc++.h>
using namespace std;
int main()
{
    // pair<string , int> student = {"Doublu", 20};
    // auto [name, roll] =  student;
    // cout << name << " " << roll << endl;

    int n;
    cin >> n;
    pair<string, int> student[n];

        for(int i = 0 ;i< n; i++)
    {
        cin >> student[i].first >>  student[i].second ;
    }

    // for(int i = 0 ;i< n; i++)
    // {
    //     cout << student[i].first << " " << student[i].second << endl;
    // }
    // oters way for print
    // for(auto [x,y] : student)
    // {
    //     cout << x << " " <<  y  << endl;
    // }

    // Lern Tuple ______________________

    // tuple<string , int , string> t = make_tuple("Robi", 20, "01323090887");
        tuple<string , int , string> t = {"Robiul", 20, "01323090887"};

    auto [name, roll, phone] = t;
    cout << name << " " << roll << " "  << phone << endl;

    return 0;
}