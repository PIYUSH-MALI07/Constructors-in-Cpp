                    // Constructor with parameter //
#include<iostream>
#include<string>
using namespace std;

class Techer
{
private:
    string name;
    string dept;
    string subject;
    int salary;

public:
    Techer(string n, string d, string s, int sal) { // Its Constructor with parameter //
        name = n;
        dept = d;
        subject = s;
        salary = sal;
    }
    Techer () { // Its also Constructor with no parameter //
        cout<<"-------Defualt Constuctot Called-------"<<endl;
    }
    void display() {
        cout<<"Techer Name = "<<name<<endl;
        cout<<"Techer Dept = "<<dept<<endl;
        cout<<"Techer Subject = "<<subject<<endl;
        cout<<"Techer Salary = "<<salary<<endl;
    }
};

int main() {
    Techer t1("Piyush", "CSA", "C++", 40000);
    t1.display();  
    Techer t2;
    t2.display(); 
}