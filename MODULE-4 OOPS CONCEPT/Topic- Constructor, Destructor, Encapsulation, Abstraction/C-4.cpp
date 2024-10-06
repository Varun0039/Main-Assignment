#include <iostream>
using namespace std;

class BankAccount {
private:
    int accountno;
    int balance;

public:
    BankAccount(int accno) {
        accountno=accno;
        balance=0;
    }

    deposit(int amount) {
        balance += amount; 
        cout<<"Deposited: "<<amount<<" New balance: "<<balance<<endl;
    }

    withdraw(int amount) {
        if (amount <= balance) {
            balance -= amount; 
            cout<<"Withdraw:"<< amount<<"New balance:"<<balance<< endl;
        } else {
            cout << "Insufficient balance." << endl;
        }
    }


};

int main() {
    int accountno;
    cout << "Enter account number: ";
    cin >> accountno;

    BankAccount myAccount(accountno);
    int amount;

    myAccount.deposit(100); 
    myAccount.withdraw(50);  

    return 0;
}

