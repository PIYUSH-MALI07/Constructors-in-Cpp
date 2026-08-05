                             // By Piyush very simple programe of Constructor //
#include<iostream>    
using namespace std;

class Medicine
{
private:
    string name;
    string purpose;
    int price;
    string company;

public:
    Medicine(string n, string pur, int p, string compy) {
        cout<<"----four value constructor-----"<<endl;
        name = n;
        purpose = pur;
        price = p;
        company = compy;
    }
    Medicine() {
        name = "Unkown";
        company = "Unknown";
        purpose = "Unkown";
        price = 0;
    }
    Medicine(string n, int p) {
        name = n;
        price = p;
        purpose = "Unkown";
        company = "Unkown";
    }
    Medicine(string n, string p, int pri) {

        name = n;
        purpose = p;
        price = pri;
        company = "Unkonwn";
    }
    void display() {
        cout<<"Medicine Name = "<<name<<endl;
        cout<<"Medicine Purpose = "<<purpose<<endl;
        cout<<"Medicine Price = "<<price<<endl;
        cout<<"Medicine Company = "<<company<<endl;
    }

};

int main() {
    Medicine m1("Vicks", "coughf relif", 5, "V-durgs");
    Medicine m2("Mezitol", "Stress free", 300);
    Medicine m3("zigzag", 400);
    Medicine m4;
    m1.display();
    m2.display();
    m3.display();
    m4.display();
}