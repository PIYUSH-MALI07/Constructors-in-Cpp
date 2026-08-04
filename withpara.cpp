#include<iostream>
using namespace std;

class Bankaccount
{
private:
    string Holdername;
    int ACnumber;
    float balance;

public:
    Bankaccount(string h, int ac, float b) {
       Holdername = h;
       ACnumber = ac;
       balance = b;
    }
    void display() {
         cout<<"Account holder name : "<<Holdername<<endl;
         cout<<"Account number : "<<ACnumber<<endl;
         cout<<"Account balance : "<<balance<<endl;
    } 
    void withdraw() {
        int withdraw;
        cout<<"Enter withdraw amount : ";
        cin>>withdraw;
        if(withdraw > balance) {
            cout<<"Insiffcient balance : "<<balance;
        }
        else {
    balance -= withdraw;
    cout<<"Amount withdrawl Total balance : "<<balance<<endl;
        }
    }
    void deposite() {
        cout<<"Enter Deposite amount : ";
        int deposite;
        cin>>deposite;
        balance += deposite;
        cout<<"Amount deposited total balance : "<<balance<<endl;
    }
};

int main() {
    Bankaccount b1("Piyush Mali", 100299255, 50000);
    b1.display();
    b1.deposite();
    b1.withdraw();
}