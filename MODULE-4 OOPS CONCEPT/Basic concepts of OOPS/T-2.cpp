#include <iostream>
#include <string>
using namespace std;
class BankAccount {
public:
    string depositorName;
    string accountNumber;
    string accountType;
    int balance;

    BankAccount(string name,string number,string type, int initialBalance) {
        depositorName = name;
        accountNumber = number;
        accountType = type;
        balance = initialBalance;
    }
    deposit(int amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited:" <<amount<<"current balance "<<balance << endl;
        } else {
            cout << "Deposit amount must be positive." <<endl;
        }
    }
    withdraw(int amount) {
        if (amount <= 0) {
        cout << "Withdrawal amount must be positive." <<endl;
        }
        if (amount > balance) {
            cout << "Insufficient balance." <<endl;
        } else {
            balance -= amount;
           cout << "Withdraw: "<<amount<<"current balance "<<balance<<endl;
        }
    }
    display() {
        cout << "Depositor Name: " << depositorName <<endl;
        cout << "Account Number: " << accountNumber <<endl;
        cout << "Account Type: " << accountType <<endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount account("Varun", "123456789", "Savings", 10000);

    account.display();
    account.deposit(500);
    account.withdraw(200);
    account.withdraw(1500);

    return 0;
}

