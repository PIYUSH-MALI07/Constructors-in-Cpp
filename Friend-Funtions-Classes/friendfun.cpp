#include<iostream>
using namespace std;

class Exam;
class student 
{
    int rno;
    string name;

public:
    student(int r, string n) {
        rno = r;
        name = n;
    }  
    friend class exam;  
};

class exam
{
    float per;

public:
    exam(float p) {
        per = p;
    }
    void show(student s) {
        cout<<"Student rollnumber = "<<s.rno<<endl;
        cout<<"Student name = "<<s.name<<endl;
        cout<<"Student percentage = "<<per<<endl;
    }
};

int main() {
    student s1(101, "Naitik");
    exam e1(60.8f);
    e1.show(s1);
}