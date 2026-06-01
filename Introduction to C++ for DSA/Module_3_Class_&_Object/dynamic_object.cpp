#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    int roll;
    int cls;
    double gpa;

    Student(int roll, int cls, double gpa){
      this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;

    };

};
int main()
{
    Student rahim(12, 30,3.25);
    cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa << endl;
    Student* karim =  new Student(20, 50,2.36);
    cout << karim->roll << " " << karim->cls << " " << karim->gpa ;
    
    return 0;
}