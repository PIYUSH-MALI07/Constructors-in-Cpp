#include<iostream>
using namespace std;

class Student;
class Techer
{
private:
    int salary;

public:
    string Tname;
    string dept;
    
    Techer(string Tname, int salary) {
        this->Tname = Tname;
        this->salary = salary;
        dept = "Computer Science & Application";
    }
    friend void display(Techer, Student);
};

class Student {
public:
    string sname;
    string course;
    int roll;

    Student(string sname, string course, int roll) {
        this->sname = sname;
        this->course = course;
        this->roll = roll;
    }
     friend void display(Techer, Student);
};

 void display(Techer t, Student s) {
    cout<<"-----Techer Information-----"<<endl;
    cout<<"Techer Department : "<<t.dept<<endl;
    cout<<"Techer Name : "<<t.Tname<<endl;
    cout<<"Techer salary : "<<t.salary<<endl; 
    cout<<"-----Student Information-----"<<endl;
    cout<<"Student Rollnumber : "<<s.roll<<endl;
    cout<<"Student Name : "<<s.sname<<endl;
    cout<<"Student Course : "<<s.course<<endl;
    }
int main() {
    Techer t1("Piyush Mali", 30000);
    Student s1("Lokesh Sen", "BCA", 111);
    display(t1, s1);
   
    return 0;
}

