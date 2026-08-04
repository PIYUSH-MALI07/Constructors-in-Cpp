#include<iostream>
#include<string>
using namespace std;

class Techer
{
public:
    string name;
    string dept;
    int salary;

public:
    Techer(string n, string d, int s) {
        name = n;
        dept = d;
        salary = s;
    }
   Techer(Techer &org) { // My own Copy Constructor //
        cout<<"---------Hlo, I am copy Contructor--------"<<endl;
        name = org.name;
        dept = org.dept;
        salary = org.salary;
    } 
    void display() {
        cout<<"Techer name = "<<name<<endl;
        cout<<"Techer dept = "<<dept<<endl;
        cout<<"Techer Salary = "<<salary<<endl;
    }
    // Extra new //
    void fun(Techer &t) {

    }
};

int main() {
    Techer t1("Piyush mali", "CSA", 30000), t3;
    t1.display();
    Techer t2(t1); // Calls copy Constructor //
    t2.name="Rahul";
 // Techer t2 = t1;
    t2.display();

    // Extra //
    t3.fun(t1);
}

