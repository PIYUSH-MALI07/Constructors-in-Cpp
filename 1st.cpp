/* 🔥 Practice Question
Q 1. Create a C++ program for a BankAccount class.
The class should contain:
(1)accountNo
(2)name
(3)balance

Apply the following:
(1)Use a constructor to initialize account details.
(2)Create a friend function transfer() that transfers money from one account to another.
(3)Create a friend class BankManager that can access and display the private details of BankAccount.
(4)Overload the + operator to add the balances of two bank accounts and return the total balance.
(5)Display the final balance of both accounts and the total balance. */
#include<iostream>
using namespace std;

class BankAccount {
    int accountNo;
    string name;
    float balance;

public:
    BankAccount(int accountNO, string name, float balance) {
        this->accountNo = accountNo;
        this->name = name;
        this->balance = balance; 
    }
    float operator +(BankAccount b) {
        float totalBalance = balance + b.balance;
        return totalBalance; 
    }
    void display() {
        cout<<"Balance = "<<balance<<endl;
    }
    friend void transfer(BankAccount &, BankAccount &, int amount);
    friend class BankManager;
};

void transfer(BankAccount &from, BankAccount &to, int amount) {
   if(amount>=from.balance) {
     cout<<"Insufficient Balance = "<<from.balance<<endl;
   }
   else {
     from.balance -= amount;
     to.balance += amount;
     cout<<"Amount Successfully Transferred = "<<amount<<endl;
   }
}

class BankManager {
public:
    BankManager() {}
    void display(BankAccount b, BankAccount b1) {
        cout<<"-----------------------------------"<<endl;
        cout<<"Account Number = "<<b.accountNo<<endl;
        cout<<"Account Holder Name = "<<b.name<<endl;
        cout<<"Account Balance = "<<b.balance<<endl;
        cout<<"-----------------------------------"<<endl;
        cout<<"Account Number = "<<b1.accountNo<<endl;
        cout<<"Account Holder Name = "<<b1.name<<endl;
        cout<<"Account Balance = "<<b1.balance<<endl;
        cout<<"-----------------------------------"<<endl;
    }
};

int main() {
    BankAccount b1(1111111, "Piyush Mali", 10000);
    BankAccount b2(2222222, "Arjun Rathod", 20000);
    BankManager m1;
    transfer(b1, b2, 11000);
    m1.display(b1, b2); 
    cout<<"Total Balance of both Accounts = "<<b1+b2<<endl;
    b1.display();
    b2.display();
    cout<<"Total Balance of both Accounts = "<<b1+b2<<endl;

    return 0;
}


