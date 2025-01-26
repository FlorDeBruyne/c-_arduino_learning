//    - Create a class to represent a bank account (with deposit, withdraw, and balance check functionalities).

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


class BankAccount{

public:
    string holderName;
    float balance;
    string accountType;
    double accountNumber;

    BankAccount(string holderName, string accountType): holderName(holderName), balance(0), accountType(accountType), accountNumber(rand() % 999999999) {
        srand(time(0)); 
        };

    bool deposit(double amount){
        if (amount > 0.0){
            balance += amount;
            return 0;
        } else {
            cout << "Can't deposit a negative amount" << endl;
            return 1;
        }
    };

    bool withdraw(double amount){
        if (amount < balance){
            balance -= amount;
            return 0;
        } else {
            cout << "Not enough money in account";
            return 1;
        }
    };

    void checkBalance(){
        cout << "Current balance: " << balance << endl;
    };

    void print(){
        cout << "Information about the account:" << endl;
        cout << "Account holder: " << holderName << endl;
        cout << "The current balance: " << balance << endl;
        cout << "Acount type: " << accountType << endl;
        cout << "Account number: " << accountNumber << endl;
    };

};


int main(){
    BankAccount account("Flor De Bruyne", "basic");

    account.print();

    account.deposit(3629);
    cout << "Account balance: " << account.balance << endl;
    account.withdraw(100);
    account.print();

}