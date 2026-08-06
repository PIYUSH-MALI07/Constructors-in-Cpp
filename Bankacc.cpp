#include<iostream>
using namespace std;

class Bankaccount
{
    string Holdername;
    int ACnumber;
    float balance;

public:
    Bankaccount() {
        cout<<"Default Constructor Called"<<endl;
    }
    void display() {
         cout<<"Account holder name : "<<Holdername<<endl;
         cout<<"Account number : "<<ACnumber<<endl;
         cout<<"Account balance : "<<balance<<endl;
    }
};

int main() {
    Bankaccount b1;
    b1.display();
}